/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrimTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:48 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:48:13 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strtrimTest()
{
	ft_printf("test1: ");
	char *s = ft_strtrim("   xxxhello", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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
	s = ft_strtrim("    xxxhello    xxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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

	ft_printf("test3: ");
	s = ft_strtrim("   xxxxhello  xxxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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

	ft_printf("test4: ");
	s = ft_strtrim("     xxxx    xxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test5: ");
	s = ft_strtrim("", "123");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test6: ");
	s = ft_strtrim("123", "");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "123"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 4);
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
	
	ft_printf("test7: ");
	s = ft_strtrim("", "");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
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
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test8: ");
	s = ft_strtrim("abcdba", "acb");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "d"))
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(s, sizeof(char) * 2);
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(GREEN "SKO " RESET);
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