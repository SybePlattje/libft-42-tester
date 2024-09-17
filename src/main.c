/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:14:15 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 14:55:48 by splattje         ###   ########.fr       */
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
	printf("FUNC tests\n");
	memchrTest();
	printf("FUNC tests\n");
	memcmpTest();
	printf("FUNC tests\n");
	memcpyTest();
	printf("FUNC tests\n");
	memmoveTest();
	printf("FUNC tests\n");
	memsetTest();
	printf("FUNC tests\n");
	putcharFdTest();
	printf("FUNC tests\n");
	putndlFdTest();
	printf("FUNC tests\n");
	putnbrFdTest();
	printf("FUNC tests\n");
	putstrFdTest();
	printf("FUNC tests\n");
	splitTest();
	printf("FUNC tests\n");
	strchrTest();
	printf("FUNC tests\n");
	strdubTest();
	printf("FUNC tests\n");
	striteriTest();
	printf("FUNC tests\n");
	strjoinTest();
	printf("FUNC tests\n");
	strlcatTest();
	printf("FUNC tests\n");
	strlcpyTest();
	printf("FUNC tests\n");
	strlenTest();
	printf("FUNC tests\n");
	strmapiTest();
	printf("FUNC tests\n");
	strncmpTest();
	printf("FUNC tests\n");
	strnstrTest();
	printf("FUNC tests\n");
	strrchrTest();
	printf("FUNC tests\n");
	strtrimTest();
	printf("FUNC tests\n");
	substrTest();
	printf("FUNC tests\n");
	tolowerTest();
	printf("FUNC tests\n");
	toupperTest();

	if (BONUS)
	{
		printf("FUNC tests\n");
		lstaddBackTest();
		printf("FUNC tests\n");
		lstaddFrontTest();
		printf("FUNC tests\n");
		lstclearTest();
		printf("FUNC tests\n");
		lstdeloneTest();
		printf("FUNC tests\n");
		lstiterTest();
		printf("FUNC tests\n");
		lstlastTste();
		printf("FUNC tests\n");
		lstmapTest();
		printf("FUNC tests\n");
		lstnewTest();
		printf("FUNC tests\n");
		lstsizeTest();
	}
	return 1;
}
