#ifndef LIBFTTESTER_H
# define LIBFTTESTER_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <strings.h>
# include <bsd/string.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <ctype.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../../libft.h"

# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define RESET "\x1b[0m"

# ifndef BONUS
#  define BONUS 0
# endif

void atoiTest();
void bzeroTest();
void callocTest();
void isalnumTest();
void isalphaTest();
void isasciiTest();
void isdigitTest();
void isprintTest();
void itoaTest();
void memchrTest();
void memcmpTest();
void memcpyTest();
void memmoveTest();
void memsetTest();
void putcharFdTest();
void putendlFdTest();
void putnbrFdTest();
void putstrFdTest();
void splitTest();
void strchrTest();
void strdupTest();
void striteriTest();
void strjoinTest();
void strlcatTest();
void strlcpyTest();
void strlenTest();
void strmapiTest();
void strncmpTest();
void strnstrTest();
void strrchrTest();
void strtrimTest();
void substrTest();
void tolowerTest();
void toupperTest();

// bonus
void lstaddBackTest();
void lstaddFrontTest();
void lstclearTest();
void lstdeloneTest();
void lstiterTest();
void lstlastTest();
void lstmapTest();
void lstnewTest();
void lstsizeTest();

#endif