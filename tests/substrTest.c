/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:32 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:18:51 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void substrTest()
{
	ft_printf("tets1: ");
	char *s = ft_substr("hello", 0, 42000);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 6);
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
	s = ft_substr("hello", 1, 1);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "e"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 2);
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
	char *str = strdup("1");
	if (str == NULL)
	{
		ft_printf("Malloc error in substr test\n");
		return;
	}
	s = ft_substr(str, 42, 42000000);
	if (s == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(str);
	}
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
		free(str);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test4: ");
	str = strdup("0123456789");
	if (str == NULL)
	{
		ft_printf("Malloc error in substr test\n");
		return;
	}
	s = ft_substr(str, 9, 10);
	if (s == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(str);
	}
	else
	{
		if (!strcmp(s, "9"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 2);
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
		free(str);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test10: ");
	s = ft_substr("42", 0, 0);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
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
				ft_printf(RED, "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(s);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test11: ");
	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "LES HARICOTS !"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 15);
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

	ft_printf("test12: ");
	s = ft_substr("test", 1, 2);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "es"))
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
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
