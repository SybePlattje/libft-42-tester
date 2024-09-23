/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteriTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:46:16 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:24:59 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void testIterFunction(unsigned int index, char *string)
{
	*string += index;
}

void striteriTest()
{
	ft_printf("test1: ");
	char test1[] = "";
	ft_striteri(test1, &testIterFunction);
	if (!strcmp(test1, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test2: ");
	char test2[] = "0";
	ft_striteri(test2, &testIterFunction);
	if (!strcmp(test2, "0"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test3: ");
	char test3[] = "0000000000";
	ft_striteri(test3, &testIterFunction);
	if (!strcmp(test3, "0123456789"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
