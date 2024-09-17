/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalphaTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 14:44:28 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isalphaTest()
{
	char test1 = 'a';
	char test2 = 'A';
	char test3 = 'z';
	char test4 = 'Z';
	int test5 = 66;
	char test6 = '\0';
	char test7 = '/';

	int testFunction = ft_isalpha(test1);
	int standard = isalpha(test1);
	printf("test1: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);
	
	testFunction = ft_isalpha(test2);
	standard = isalpha(test2);
	printf("test2: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	int testFunction = ft_isalpha(test3);
	int standard = isalpha(test3);
	printf("test3: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	int testFunction = ft_isalpha(test4);
	int standard = isalpha(test4);
	printf("test4: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	int testFunction = ft_isalpha(test5);
	int standard = isalpha(test5);
	printf("test5: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
			printf(GREEN "OK " RESET);
		else
			printf(YELLOW "OK, but different return value " RESET);
	}
	else
		printf(RED "KO " RESET);

	int testFunction = ft_isalpha(test6);
	int standard = isalpha(test6);
	printf("test6: ");
	if (!testFunction && !standard)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	int testFunction = ft_isalpha(test7);
	int standard = isalpha(test7);
	printf("test7: ");
	if (!testFunction && !standard)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	// TODO add memcheck
}
