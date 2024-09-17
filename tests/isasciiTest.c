/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isasciiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:58 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 14:44:36 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isasciiTest()
{
	int test1 = 5;
	int test2 = 0;
	int test3 = 127;
	int test4 = 200;
	int test5 = -1;

	int standard = isascii(test1);
	int testFunction = ft_isascii(test1);
	printf("test1: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	standard = isascii(test2);
	testFunction = ft_isascii(test2);
	printf("test2: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value" RESET);
	}
	else
		printf(RED "KO " RESET);
	
	standard = isascii(test3);
	testFunction = ft_isascii(test3);
	printf("test3: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value" RESET);
	}
	else
		printf(RED "KO " RESET);
	
	standard = isascii(test4);
	testFunction = ft_isascii(test4);
	printf("test4: ");
	if (!standard && !testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	standard = isascii(test5);
	testFunction = ft_isascii(test5);
	printf("test5: ");
	if (!standard && !testFunction)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	// TODO add memcheck
}
