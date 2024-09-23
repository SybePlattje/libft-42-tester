/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoaTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:02:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 13:08:06 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void itoaTest()
{
	char *output = ft_itoa(0);
	ft_printf("test1: ");
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (output[0] == '0' && output[1] == '\0')
		{
			ft_printf (GREEN "OK " RESET);
			int sizeCheck = checkSize(output, sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK ", RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO ", RESET);
			else
				ft_printf(RED, "NKO ", RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(output);
		if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
			ft_printf(GREEN "MOK " RESET);
		else
			ft_printf(RED "MKO " RESET);
	}

	ft_printf("test2: ");
	output = ft_itoa(-3442);
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(output, "-3442") && output[5] == '\0')
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(output, sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK ", RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO ", RESET);
			else
				ft_printf(RED, "NKO ", RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(output);
		if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
			ft_printf(GREEN "MOK " RESET);
		else
			ft_printf(RED "MKO " RESET);
	}

	ft_printf("test3: ");
	output = ft_itoa(INT_MIN);
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(output, "-2147483648") && output[11] == '\0')
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(output, sizeof(char) * 12);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK ", RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO ", RESET);
			else
				ft_printf(RED, "NKO ", RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(output);
		if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
			ft_printf(GREEN "MOK " RESET);
		else
			ft_printf(RED "MKO " RESET);
	}

	ft_printf("test4: ");
	output = ft_itoa(INT_MAX);
	if (output == NULL)
		ft_printf(RED "NKO\n" RESET);
	else
	{
		if (!strcmp(output, "2147483647") && output[10] == '\0')
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(output, sizeof(char) * 11);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK ", RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO ", RESET);
			else
				ft_printf(RED, "NKO ", RESET);
		}
		else
			ft_printf(RED "KO\n" RESET);
		free(output);
		if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
			ft_printf(GREEN "MOK\n" RESET);
		else
			ft_printf(RED "MKO\n" RESET);
	}
}
