/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:57:06 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:38:45 by splattje         ###   ########.fr       */
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
		check(!strcmp(tab[0], "hello"));
		checkSize(tab[0], sizeof(char) * 6);

		ft_printf("test2: ");
		check(!strcmp(tab[1], "42"));
		checkSize(tab[1], sizeof(char) * 3);
		
		ft_printf("test3: ");
		check(tab[2] == NULL);
		freeTab(tab);
	}
	checkMemory();
	
	ft_printf("test4: ");
	tab = ft_split("Hello", 0);
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(tab[0], "Hello"));
		checkSize(tab[0], sizeof(char) * 6);
		
		ft_printf("test5: ");
		check(tab[1] == NULL);
		freeTab(tab);
	}
	checkMemory();

	ft_printf("test6: ");
	tab = ft_split("         ", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(tab[0] == NULL);
		free(tab);
	}
	checkMemory();

	ft_printf("test7: ");
	tab = ft_split("chinchila", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(tab[0], "chinchila"));
		checkSize(tab[0], sizeof(char) * 10);

		ft_printf("test8: ");
		check(tab[1] == NULL);
		freeTab(tab);
	}
	checkMemory();

	ft_printf("test9: ");
	tab = ft_split("", ' ');
	if (tab == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(tab[0] == NULL);
		freeTab(tab);
	}
	checkMemory();
	
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
		check(!strcmp(tab[0], "hello"));
		checkSize(tab[0], sizeof(char) * 6);

		ft_printf("test11: ");
		check(tab[1] == NULL);
		free(splitme);
		freeTab(tab);
	}
	checkMemory();

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
		check(!strcmp(tab[0], "hello"));
		checkSize(tab[0], sizeof(char) * 6);

		ft_printf("test13: ");
		check(tab[1] == NULL);
		free(splitme);
		freeTab(tab);
	}
	checkMemory();

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
		check(!strcmp(tab[0], "hello"));
		checkSize(tab[0], sizeof(char) * 6);

		ft_printf("test15: ");
		check(tab[1] == NULL);
		free(splitme);
		freeTab(tab);
	}
	checkMemory();

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
		check(!strcmp(tab[0], "hello"));
		checkSize(tab[0], sizeof(char) * 6);

		ft_printf("test17: ");
		check(tab[1] == NULL);
		free(splitme);
		freeTab(tab);
	}
	checkMemory();

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
		check(!strcmp(tab[0], "1"));
		checkSize(tab[0], sizeof(char) * 2);

		ft_printf("test19: ");
		check(!strcmp(tab[1], "2"));
		checkSize(tab[1], sizeof(char) * 2);

		ft_printf("test20: ");
		check(!strcmp(tab[2], "3"));
		checkSize(tab[2], sizeof(char) * 2);

		ft_printf("test21: ");
		check(!strcmp(tab[3], "4"));
		checkSize(tab[3], sizeof(char) * 2);

		ft_printf("test22: ");
		check(!strcmp(tab[4], "5"));
		checkSize(tab[4], sizeof(char) * 2);

		ft_printf("test23: ");
		check(!strcmp(tab[5], "42"));
		checkSize(tab[5], sizeof(char) * 3);
		free(splitme);
		freeTab(tab);
	}
	checkMemory();
	write(1, "\n", 1);
}
