#ifndef MEMTRACK_HPP
# define MEMTRACK_HPP


# ifdef __cplusplus
	# include <cstdlib>
	# include <cstdio>
	# include <csignal>

	typedef struct s_memory
	{
		void* ptr;
		std::size_t size;
		struct s_memory* next;
	} t_memory;

	extern std::size_t g_total_allocated_memory;

	extern "C" {
# else
	# include <stdlib.h>
	# include <stdio.h>
	# include <signal.h>

	typedef struct s_memory
	{
		void* ptr;
		size_t size;
		struct s_memory* next;
	} t_memory;

	extern size_t g_total_allocated_memory;
# endif
# include <dlfcn.h>
# include "../../include/libftTester.h"


#ifdef __cplusplus
	void* malloc(std::size_t size) noexcept;
	void free(void* ptr) noexcept;
	void checkSize(void* ptr, std::size_t size);
	void setStartAmound(std::size_t size);
#else
	void* malloc(size_t size);
	void free(void* prt);
	void checkSize(void* ptr, size_t size);
	void setStartAmound(size_t size);
#endif
void sigsegv(int signal);
void checkMemory();
void check(bool statement);

# ifdef __cplusplus
	}
# endif
#endif