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
extern size_t g_total_allocated_memory;

typedef struct s_memory
{
	void* ptr;
	size_t size;
	struct s_memory* next;
} t_memory;

#ifdef __cplusplus
	void* malloc(size_t size) noexcept;
	void free(void* ptr) noexcept;
#else
	void* malloc(size_t size);
	void free(void* prt);
#endif
void sigsegv(int signal);
int checkSize(void* ptr, size_t size);

# ifdef __cplusplus
	}
# endif
#endif