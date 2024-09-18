/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:57:06 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 16:20:17 by splattje         ###   ########.fr       */
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
	printf("test1: ");
	char **tab = ft_split("  hello   42  ", ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else 
	{
		if (!strcmp(tab[0], "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test2: ");
		if (!strcmp(tab[1], "42"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test3: ");
		if (tab[2] == NULL)
			printf(GREEN "KO " RESET);
		freeTab(tab);
	}
	
	printf("test4: ");
	tab = ft_split("Hello", 0);
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "Hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test5: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		freeTab(tab);
	}

	printf("test6: ");
	tab = ft_split("         ", ' ');
	if (tab == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (tab[0] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(tab);
	}

	printf("test7: ");
	tab = ft_split("chinchila", ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "chinchila"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test8: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		freeTab(tab);
	}

	printf("test9: ");
	tab = ft_split("", ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (tab[0] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		freeTab(tab);
	}
	
	printf("test10: ");
	char *splitme = strdup("hello");
	if (splitme == NULL)
	{
		printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test11: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}

	printf("test12: ");
	splitme = strdup("hello ");
	if (splitme == NULL)
	{
		printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test13: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}

	printf("test14: ");
	splitme = strdup(" hello");
	if (splitme == NULL)
	{
		printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test15: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}

	printf("test16: ");
	splitme = strdup(" hello ");
	if (splitme == NULL)
	{
		printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, ' ');
	if (tab == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(tab[0], "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test17: ");
		if (tab[1] == NULL)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(splitme);
		freeTab(tab);
	}

	printf("test18: ");
	splitme = strdup("--1-2-3---4----5-----42");
	if (splitme == NULL)
	{
		printf(RED "Malloc error in split test\n" RESET);
		return;
	}
	tab = ft_split(splitme, '-');
	if (tab == NULL)
		printf(RED "NKO\n" RESET);
	else
	{
		if (!strcmp(tab[0], "1"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test19: ");
		if (!strcmp(tab[1], "2"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test20: ");
		if (!strcmp(tab[2], "3"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test21: ");
		if (!strcmp(tab[3], "4"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test22: ");
		if (!strcmp(tab[4], "5"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		printf("test23: ");
		if (!strcmp(tab[5], "42"))
			printf(GREEN "OK\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(splitme);
		freeTab(tab);
	}
}