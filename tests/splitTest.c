/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:57:06 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:46:48 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

static void freeTab(char **tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}

void splitTest()
{
	ft_printf("test1: ");
	char **tab = ft_split("  hello   42  ", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else 
	{
		if (!strcmp(tab[0], "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED, "NKO ", RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test2: ");
		if (!strcmp(tab[1], "42"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[1], sizeof(char) * 3);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test3: ");
		if (tab[2] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test4: ");
	tab = ft_split("Hello", 0);
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "Hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test5: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test6: ");
	tab = ft_split("         ", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		if (tab[0] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		free(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test7: ");
	tab = ft_split("chinchila", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "chinchila"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 10);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test8: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test9: ");
	tab = ft_split("", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		if (tab[0] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test10: ");
	char *splitme = strdup("hello");
	if (splitme == NULL)
	{
		ft_printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(splitme);
	}
	else
	{
		if (!strcmp(tab[0], "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test11: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test12: ");
	splitme = strdup("hello ");
	if (splitme == NULL)
	{
		ft_printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(splitme);
	}
	else
	{
		if (!strcmp(tab[0], "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test13: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test14: ");
	splitme = strdup(" hello");
	if (splitme == NULL)
	{
		ft_printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(splitme);
	}
	else
	{
		if (!strcmp(tab[0], "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test15: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test16: ");
	splitme = strdup(" hello ");
	if (splitme == NULL)
	{
		ft_printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
	{
		ft_printf(RED "NKO " RESET);
		free(splitme);
	}
	else
	{
		if (!strcmp(tab[0], "hello"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 6);
			if (sizeCheck == 1)
				ft_printf(GREEN "OK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test17: ");
		if (tab[1] == NULL)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test18: ");
	splitme = strdup("--1-2-3---4----5-----42");
	if (splitme == NULL)
	{
		ft_printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, '-');
	if (tab == NULL)
	{
		ft_printf(RED "NKO\n" RESET);
		free(splitme);
	}
	else
	{
		if (!strcmp(tab[0], "1"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[0], sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test19: ");
		if (!strcmp(tab[1], "2"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[1], sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test20: ");
		if (!strcmp(tab[2], "3"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[2], sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test21: ");
		if (!strcmp(tab[3], "4"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[3], sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test22: ");
		if (!strcmp(tab[4], "5"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[4], sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		ft_printf("test23: ");
		if (!strcmp(tab[5], "42"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tab[5], sizeof(char) * 3);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf(RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}