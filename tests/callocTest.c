/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callocTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:42:19 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void callocTest()
{
	ft_printf("test1: ");
	void *test = ft_calloc(0, sizeof(int));
	if (test == NULL)
		ft_printf(RED "KO " RESET);
	else
	{
		ft_printf(GREEN "OK " RESET);
		free(test);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test2: ");
	test = ft_calloc(2, ULONG_MAX);
	if (test == NULL)
		ft_printf(GREEN "OK " RESET);
	else
	{
		ft_printf(RED "KO " RESET);
		free(test);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test3: ");
	test = ft_calloc(24, sizeof(int));
	if (test == NULL)
		ft_printf(RED "KO " RESET);
	else
	{
		ft_printf(GREEN "OK " RESET);
		free(test);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}

