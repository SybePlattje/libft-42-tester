/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:10 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 12:35:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void atoiTest()
{
	char *test1 = "    \t\n\v\f\r+200";
	int standard = atoi(test1);
	int written = ft_atoi(test1);
	printf("test1: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	
	char *test2 = "2147483647";
	standard = atoi(test2);
	written = ft_atoi(test2);
	printf("test2: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	
	char *test3 = "-2147483648";
	standard = atoi(test3);
	written = ft_atoi(test3);
	printf("test3: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);

	char *test4 = "2147483648";
	standard = atoi(test4);
	written = ft_atoi(test4);
	printf("test4: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	
	char *test5 = "-2147483649";
	standard = atoi(test5);
	written = ft_atoi(test5);
	printf("test5: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);

	char *test6 = "125a213";
	standard = atoi(test6);
	written = ft_atoi(test6);
	printf("test6: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	
	char *test7 = "++2345";
	standard = atoi(test7);
	written = ft_atoi(test7);
	printf("test7: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK " RESET);

	char *test8 = "--32352";
	standard = atoi(test8);
	written = ft_atoi(test8);
	printf("test8: ");
	if (standard != written)
	{
		printf(RED "KO " RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK\n" RESET);
	// TODO add memcheck
}