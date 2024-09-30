/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:14:15 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 11:08:25 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

int main(void)
{
	signal(SIGSEGV, sigsegv);
	setStartAmound(g_total_allocated_memory);
	ft_printf("atoi tests\n");
	atoiTest();
	ft_printf("bzero tests\n");
	bzeroTest();
	ft_printf("calloc tests\n");
	callocTest();
	ft_printf("isalnum tests\n");
	isalnumTest();
	ft_printf("isalpha tests\n");
	isalphaTest();
	ft_printf("isascii tests\n");
	isasciiTest();
	ft_printf("isdigit tests\n");
	isdigitTest();
	ft_printf("isprint tests\n");
	isprintTest();
	ft_printf("itoa tests\n");
	itoaTest();
	ft_printf("memchr tests\n");
	memchrTest();
	ft_printf("memcmp tests\n");
	memcmpTest();
	ft_printf("memcpy tests\n");
	memcpyTest();
	ft_printf("memmove tests\n");
	memmoveTest();
	ft_printf("memset tests\n");
	memsetTest();
	ft_printf("putcharFd tests\n");
	putcharFdTest();
	ft_printf("putendlFd tests\n");
	putendlFdTest();
	ft_printf("putnbrFd tests\n");
	putnbrFdTest();
	ft_printf("putstrFd tests\n");
	putstrFdTest();
	ft_printf("split tests\n");
	splitTest();
	ft_printf("strchr tests\n");
	strchrTest();
	ft_printf("strdup tests\n");
	strdupTest();
	ft_printf("striteri tests\n");
	striteriTest();
	ft_printf("strjoin tests\n");
	strjoinTest();
	ft_printf("strlcat tests\n");
	strlcatTest();
	ft_printf("strlcpy tests\n");
	strlcpyTest();
	ft_printf("strlen tests\n");
	strlenTest();
	ft_printf("strmapi tests\n");
	strmapiTest();
	ft_printf("strncmp tests\n");
	strncmpTest();
	ft_printf("strnstr tests\n");
	strnstrTest();
	ft_printf("strrchr tests\n");
	strrchrTest();
	ft_printf("strtrim tests\n");
	strtrimTest();
	ft_printf("substr tests\n");
	substrTest();
	ft_printf("tolower tests\n");
	tolowerTest();
	ft_printf("toupper tests\n");
	toupperTest();

	if (BONUS)
	{
		ft_printf("lstaddBack tests\n");
		lstaddBackTest();
		ft_printf("lstaddFront tests\n");
		lstaddFrontTest();
		ft_printf("lstclear tests\n");
		lstclearTest();
		ft_printf("lstdelone tests\n");
		lstdeloneTest();
		ft_printf("lstiter tests\n");
		lstiterTest();
		ft_printf("lstlast tests\n");
		lstlastTest();
		ft_printf("lstmap tests\n");
		lstmapTest();
		ft_printf("lstnew tests\n");
		lstnewTest();
		ft_printf("lstsize tests\n");
		lstsizeTest();
	}
	return 1;
}
