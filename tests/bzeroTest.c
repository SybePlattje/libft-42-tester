/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzeroTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:45:09 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 11:37:38 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void bzeroTest()
{
	char	test[5];
	bool	failed = false;
	ft_bzero(test, 5);
	ft_printf("test1: ");
	for (int i = 0; i < 5; i++)
	{
		if (test[i] != 0)
		{
			failed = true;
			ft_printf(RED "KO " RESET);
			ft_printf("index is: %d test[i] is %d ", i, test[i]);
		}
	}
	if (!failed)
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	failed = false;
	char test2[100];
	memset(test2, 'A', 100);
	ft_bzero(test2, 0);
	ft_printf("test2: ");
	if (test2[0] != 'A')
	{
		failed = true;
		ft_printf(RED "KO " RESET);
		ft_printf("index is: 0 test2[0] is %d ", test2[0]);
	}
	if (!failed)
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	failed = false;
	ft_bzero(test2, 42);
	int index = 0;
	ft_printf("test3: ");
	for(; index < 100 && test2[index] == 0; ++index)
		;
	if (index != 42 && test2[42 != 'A'])
	{
		failed = true;
		ft_printf(RED "KO " RESET);
		ft_printf("index is: %d test2[index] is %d ", index, test2[index]);
	}
	if (!failed)
		ft_printf(GREEN "OK " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
