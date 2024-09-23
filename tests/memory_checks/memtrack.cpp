#include "memtrack.hpp"
#include <cstring>
#include <dlfcn.h>
#include <vector>
#include <iostream>
//#include <malloc.h>
#include <unistd.h>

static void* (*real_malloc)(std::size_t) = nullptr;
static void (*real_free)(void*) = nullptr;

t_memory* allocation_memory = nullptr;
std::size_t g_total_allocated_memory = 0;

static bool inMalloc = false;

void sigsegv(int signal)
{
	(void)signal;
	std::printf(YELLOW "segfault\n" RESET);
	exit(EXIT_SUCCESS);
}

static void init()
{
	if (!real_malloc || !real_free)
	{
		g_total_allocated_memory = 0;
		real_malloc = (void* (*)(std::size_t))dlsym(RTLD_NEXT, "malloc");
		real_free = (void (*)(void*))dlsym(RTLD_NEXT, "free");
		if (!real_malloc || !real_free)
		{
			std::fprintf(stderr, "Error: Could not locate real mallloc/free funcion\n");
			_exit(EXIT_FAILURE);
		}
	}
}


extern "C" void* malloc(std::size_t size) {
	try
	{
		if (inMalloc)
			return nullptr;
		void* ptr = nullptr;
		inMalloc = true;
		if (!real_malloc)
			init();
		ptr = real_malloc(size);
		if (ptr)
		{
			t_memory* newBlock = (t_memory*)real_malloc(sizeof(t_memory));
			if (!newBlock)
			{
				std::fprintf(stderr, "allocation failed for traking block\n");
				real_free(ptr);
				return nullptr;
			}
			newBlock->ptr = ptr;
			newBlock->size = size;
			newBlock->next = nullptr;

			if (allocation_memory)
			{
				t_memory* current = allocation_memory;
				while (current->next != nullptr)
					current = current->next;
				current->next = newBlock;
			}
			else
				allocation_memory = newBlock;

			g_total_allocated_memory += size;
			// std::printf("Allocated %zu bytes, total: %zu\n", size, g_total_allocated_memory);
		}
		else
			std::fprintf(stderr, "Allocation failed\n");
		inMalloc = false;
		return ptr;
	} catch (...)
	{
		std::fprintf(stderr, "Error: Exception occurred while updating allocation map\n");
		std::exit(EXIT_FAILURE);
	}
}


extern "C" void free(void* ptr) {
	try
	{
		if (!real_free)
			init();
		t_memory* current = allocation_memory;
		t_memory* previous = nullptr;
		while (current != nullptr)
		{
			if (current->ptr == ptr)
			{
				if (previous)
					previous->next = current->next;
				else
					allocation_memory = current->next;
				g_total_allocated_memory -= current->size;
				// std::printf("freed %zu bytes, total: %zu\n", current->size, g_total_allocated_memory);
				real_free(current);
				break;
			}
			previous = current;
			current = current->next;
		}
		real_free(ptr);
	} catch (...)
	{
		std::fprintf(stderr, "Error: Exception occurred while updating allocation map\n");
		std::exit(EXIT_FAILURE);
	}
}

void checkSize(void* ptr, std::size_t size)
{
	t_memory* current = allocation_memory;
	while (allocation_memory != nullptr)
	{
		if (current->ptr == ptr)
		{
			 if (current->size == size)
			 	ft_printf(GREEN "SOK " RESET);
			else
				ft_printf(RED "SKO " RESET);
		}
		current = current->next;
	}
	ft_printf(RED "NKO " RESET);
}

void checkMemory()
{
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "SOK " RESET);
	else
		ft_printf(RED "SKO " RESET);
}

void check(bool statement)
{
	if (statement)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
}
