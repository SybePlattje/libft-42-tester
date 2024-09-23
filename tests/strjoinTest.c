/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:02:29 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:38:40 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strjoinTest()
{
	ft_printf("test1: ");
	char *s = ft_strjoin("Hello ", "42");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "Hello 42"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 9);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test2: ");
	s = ft_strjoin("", "42");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,"42"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 3);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test3: ");
	s = ft_strjoin("42", "");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,"42"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 3);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test4: ");
	s = ft_strjoin("", "");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,""))
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