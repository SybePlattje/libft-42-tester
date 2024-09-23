/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdupTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:22:55 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
void strdupTest()
{
	ft_printf("test1: ");
	char *test = "hello";
	char *output = ft_strdup(test);
	if (output == NULL)
		ft_printf(RED "KO " RESET);
	else if (output == test)
	{
		ft_printf(RED "KO " RESET);
		free (output);
	}
	else
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(output, sizeof(char) * 6);
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
		free (output);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test2: ");
	char *test2 = "";
	output = ft_strdup(test2);
	if (output == NULL)
		ft_printf(RED "KO " RESET);
	else if (output == test2)
	{
		ft_printf(RED "KO " RESET);
		free (output);
	}
	else
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(output, sizeof(char) * 1);
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK ");
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
		free (output);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
