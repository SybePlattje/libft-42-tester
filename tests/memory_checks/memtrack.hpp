#ifndef MEMTRACK_HPP
# define MEMTRACK_HPP


# ifdef __cplusplus
	# include <cstdlib>
	# include <cstdio>
	# include <csignal>
	extern "C" {
#  else
	# include <stdlib.h>
	# include <stdio.h>
	# include <signal.h>
# endif
# include <dlfcn.h>
# include "../../include/libftTester.h"
extern std::size_t g_total_allocated_memory;

typedef struct s_memory
{
	void* ptr;
	std::size_t size;
	struct s_memory* next;
} t_memory;

#ifdef __cplusplus
	void* malloc(std::size_t size) noexcept;
	void free(void* ptr) noexcept;
#else
	void* malloc(size_t size);
	void free(void* prt);
#endif
void sigsegv(int signal);
void checkSize(void* ptr, std::size_t size);
void checkMemory();
void check(bool statement);

# ifdef __cplusplus
	}
# endif
#endif