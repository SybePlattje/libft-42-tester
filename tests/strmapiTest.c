/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:12 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:52:35 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
static char addOne(unsigned int index, char c)
{
	return index + c;
}

void strmapiTest()
{
	char *s = ft_strmapi("1234", addOne);
	ft_printf("test1: ");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "1357"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 5);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO" RESET);
		free(s);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test2: ");
	s = ft_strmapi("", addOne);
	if (s == NULL)
		ft_printf(RED "NKO\n" RESET);
	else
	{
		if (!strcmp(s, ""))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 1);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(s);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}