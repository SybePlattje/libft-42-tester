/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isasciiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:58 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 11:45:06 by splattje         ###   ########.fr       */
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
	ft_printf("test1: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(YELLOW "OK, but different return value " RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	standard = isascii(test2);
	testFunction = ft_isascii(test2);
	ft_printf("test2: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(YELLOW "OK, but different return value" RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	standard = isascii(test3);
	testFunction = ft_isascii(test3);
	ft_printf("test3: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(YELLOW "OK, but different return value" RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	standard = isascii(test4);
	testFunction = ft_isascii(test4);
	ft_printf("test4: ");
	if (!standard && !testFunction)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	standard = isascii(test5);
	testFunction = ft_isascii(test5);
	ft_printf("test5: ");
	if (!standard && !testFunction)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
