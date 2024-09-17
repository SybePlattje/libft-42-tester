/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigitTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:00:05 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 14:44:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isdigitTest()
{
	char test1 = '4';
	int test2 = 50;
	char test3 = '0';
	char test4 = '9';
	int test5 = 9;
	int test6 = 0;

	int standard = isdigit(test1);
	int testFunction = ft_isdigit(test1);
	printf("test1: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO ", RESET);

	standard = isdigit(test2);
	testFunction = ft_isdigit(test2);
	printf("test2: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO ", RESET);

	standard = isdigit(test3);
	testFunction = ft_isdigit(test3);
	printf("test3: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO ", RESET);

	standard = isdigit(test4);
	testFunction = ft_isdigit(test4);
	printf("test4: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO ", RESET);

	standard = isdigit(test5);
	testFunction = ft_isdigit(test5);
	printf("test5: ");
	if (!standard && !testFunction)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	standard = isdigit(test6);
	testFunction = ft_isdigit(test6);
	printf("test6: ");
	if (!standard && !testFunction)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
	// TODO add memcheck
}