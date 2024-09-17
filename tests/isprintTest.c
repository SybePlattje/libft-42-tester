/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprintTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:00:11 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 12:38:16 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isprintTest()
{
	int test1 = 32;
	int test2 = 126;
	int test3 = 0;
	int test4 = 200;
	int test5 = -1;
	int test6 = 31;
	int test7 = 127;

	int standard = isprint(test1);
	int testFunction = ft_isprint(test1);
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
	
	standard = isprint(test2);
	testFunction = ft_isprint(test2);
	printf("test2: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else 
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	standard = isprint(test3);
	testFunction = ft_isprint(test3);
	printf("test3: ");
	if (!standard && !testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	standard = isprint(test4);
	testFunction = ft_isprint(test4);
	printf("test4: ");
	if (!standard && !testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	standard = isprint(test5);
	testFunction = ft_isprint(test5);
	printf("test5: ");
	if (!standard && !testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	standard = isprint(test6);
	testFunction = ft_isprint(test6);
	printf("test6: ");
	if (!standard && !testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	standard = isprint(test7);
	testFunction = ft_isprint(test7);
	printf("test7: ");
	if (!standard && !testFunction)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	// TODO add memcheck
}