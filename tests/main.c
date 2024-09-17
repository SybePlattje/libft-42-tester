/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:14:15 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 13:19:44 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

int main(void)
{
	printf("atoi tests\n");
	atoiTest();
	printf("bzero tests\n");
	bzeroTest();
	printf("calloc tests\n");
	callocTest();
	printf("isalnum tests\n");
	isalnumTest();
	printf("isalpha tests\n");
	isalphaTest();
	printf("isascii tests\n");
	isasciiTest();
	printf("isdigit tests\n");
	isdigitTest();
	printf("isprint tests\n");
	isprintTest();
	printf("itoa tests\n");
	itoaTest();
	printf("memchr tests\n");
	memchrTest();
	printf("memcmp tests\n");
	memcmpTest();
	printf("memcpy tests\n");
	memcpyTest();
	printf("memmove tests\n");
	memmoveTest();
	printf("memset tests\n");
	memsetTest();
	printf("putcharFd tests\n");
	putcharFdTest();
	printf("putendlFd tests\n");
	putendlFdTest();
	printf("putnbrFd tests\n");
	putnbrFdTest();
	printf("putstrFd tests\n");
	putstrFdTest();
	printf("split tests\n");
	splitTest();
	printf("strchr tests\n");
	strchrTest();
	printf("strdup tests\n");
	strdupTest();
	printf("striteri tests\n");
	striteriTest();
	printf("strjoin tests\n");
	strjoinTest();
	printf("strlcat tests\n");
	strlcatTest();
	printf("strlcpy tests\n");
	strlcpyTest();
	printf("strlen tests\n");
	strlenTest();
	printf("strmapi tests\n");
	strmapiTest();
	printf("strncmp tests\n");
	strncmpTest();
	printf("strnstr tests\n");
	strnstrTest();
	printf("strrchr tests\n");
	strrchrTest();
	printf("strtrim tests\n");
	strtrimTest();
	printf("substr tests\n");
	substrTest();
	printf("tolower tests\n");
	tolowerTest();
	printf("toupper tests\n");
	toupperTest();

	if (BONUS)
	{
		printf("lstaddBack tests\n");
		lstaddBackTest();
		printf("lstaddFront tests\n");
		lstaddFrontTest();
		printf("lstclear tests\n");
		lstclearTest();
		printf("lstdelone tests\n");
		lstdeloneTest();
		printf("lstiter tests\n");
		lstiterTest();
		printf("lstlast tests\n");
		lstlastTest();
		printf("lstmap tests\n");
		lstmapTest();
		printf("lstnew tests\n");
		lstnewTest();
		printf("lstsize tests\n");
		lstsizeTest();
	}
	return 1;
}
