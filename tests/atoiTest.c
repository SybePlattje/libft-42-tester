/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:10 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 11:40:46 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void atoiTest()
{
	char *test1 = "    \t\n\v\f\r+200";
	int standard = atoi(test1);;
	int written = ft_atoi(test1);
	ft_printf("test1: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
	{
		ft_printf(RED "MKO " RESET);
		ft_printf("size is %zu ", g_total_allocated_memory);
	}
	
	char *test2 = "2147483647";
	standard = atoi(test2);
	written = ft_atoi(test2);
	ft_printf("test2: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
	{
		ft_printf(RED "MKO " RESET);
		ft_printf("size is %zu ", g_total_allocated_memory);
	}
	
	char *test3 = "-2147483648";
	standard = atoi(test3);
	written = ft_atoi(test3);
	ft_printf("test3: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
	{
		ft_printf(RED "MKO " RESET);
		ft_printf("size is %zu ", g_total_allocated_memory);
	}

	char *test4 = "2147483648";
	standard = atoi(test4);
	written = ft_atoi(test4);
	ft_printf("test4: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	char *test5 = "-2147483649";
	standard = atoi(test5);
	written = ft_atoi(test5);
	ft_printf("test5: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	char *test6 = "125a213";
	standard = atoi(test6);
	written = ft_atoi(test6);
	ft_printf("test6: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d ", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	char *test7 = "++2345";
	standard = atoi(test7);
	written = ft_atoi(test7);
	ft_printf("test7: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	char *test8 = "--32352";
	standard = atoi(test8);
	written = ft_atoi(test8);
	ft_printf("test8: ");
	if (standard != written)
	{
		ft_printf(RED "KO " RESET);
		ft_printf("the standard outputs %d, your output was %d\n", standard, written);
	}
	else
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}