/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnumTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:49 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 14:44:23 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isalnumTest()
{
	char test1 = 'a';
	char test2 = 'A';
	char test3 = '4';
	int test4 = 66;
	char test5 = '\0';
	char test6 = '%';
	int testFunction;
	int standard;
	
	testFunction = ft_isalnum(test1);
	standard = isalnum(test1);
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

	testFunction = ft_isalnum(test2);
	standard = isalnum(test2);
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

	testFunction = ft_isalnum(test3);
	standard = isalnum(test3);
	printf("test3: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	testFunction = ft_isalnum(test4);
	standard = isalnum(test4);
	printf("test4: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	testFunction = ft_isalnum(test5);
	standard = isalnum(test5);
	printf("test5: ");
	if (!testFunction && !standard)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	testFunction = ft_isalnum(test6);
	standard = isalnum(test6);
	printf("test6: ");
	if (!testFunction && !standard)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	// TODO add memcheck
}
