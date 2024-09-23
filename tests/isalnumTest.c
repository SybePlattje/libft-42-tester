/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnumTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:49 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 11:43:17 by splattje         ###   ########.fr       */
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

	testFunction = ft_isalnum(test2);
	standard = isalnum(test2);
	ft_printf("test2: ");
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

	testFunction = ft_isalnum(test3);
	standard = isalnum(test3);
	ft_printf("test3: ");
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

	testFunction = ft_isalnum(test4);
	standard = isalnum(test4);
	ft_printf("test4: ");
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

	testFunction = ft_isalnum(test5);
	standard = isalnum(test5);
	ft_printf("test5: ");
	if (!testFunction && !standard)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	testFunction = ft_isalnum(test6);
	standard = isalnum(test6);
	ft_printf("test6: ");
	if (!testFunction && !standard)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
