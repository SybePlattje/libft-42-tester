/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalphaTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:59:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 11:44:18 by splattje         ###   ########.fr       */
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
	ft_printf("test1: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
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
	
	testFunction = ft_isalpha(test2);
	standard = isalpha(test2);
	ft_printf("test2: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
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

	testFunction = ft_isalpha(test3);
	standard = isalpha(test3);
	ft_printf("test3: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
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

	testFunction = ft_isalpha(test4);
	standard = isalpha(test4);
	ft_printf("test4: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
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

	testFunction = ft_isalpha(test5);
	standard = isalpha(test5);
	ft_printf("test5: ");
	if (testFunction && standard)
	{
		if (testFunction == standard)
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

	testFunction = ft_isalpha(test6);
	standard = isalpha(test6);
	ft_printf("test6: ");
	if (!testFunction && !standard)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	testFunction = ft_isalpha(test7);
	standard = isalpha(test7);
	ft_printf("test7: ");
	if (!testFunction && !standard)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
