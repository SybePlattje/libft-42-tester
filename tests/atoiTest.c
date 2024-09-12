/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:10 by splattje          #+#    #+#             */
/*   Updated: 2024/09/12 16:21:46 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void atoiTest()
{
	char *test1 = "    \t\n\v\f\r+200";
	int standard = atoi(test1);
	int written = ft_atoi(test1);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
		return;
	}
	printf(GREEN "OK " RESET);
	
	char *test2 = "2147483647";
	standard = atoi(test2);
	written = ft_atoi(test2);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	printf(GREEN "OK " RESET);
	
	char test3 = "-2147483648";
	standard = atoi(test3);
	written = ft_atoi(test3);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK " RESET);

	char *test4 = "2147483648";
	standard = atoi(test4);
	written = ft_atoi(test4);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	
	char *test5 = "-2147483649";
	standard = atoi(test5);
	written = ft_atoi(test5);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
	char *test6 = "125a213";
	standard = atoi(test6);
	written = ft_atoi(test6);
	if (standard != written)
	{
		printf(RED "OK\n" RESET);
		printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		printf(GREEN "OK " RESET);
}