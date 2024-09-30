/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrimTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:48 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:38:41 by splattje         ###   ########.fr       */
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
		check(!strcmp(s, "hello"));
		checkSize(s, sizeof(char) * 6);
		free(s);
	}
	checkMemory();

	ft_printf("test2: ");
	s = ft_strtrim("    xxxhello    xxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, "hello"));
		checkSize(s, sizeof(char) * 6);
		free(s);
	}
	checkMemory();

	ft_printf("test3: ");
	s = ft_strtrim("   xxxxhello  xxxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, "hello"));
		checkSize(s, sizeof(char) * 6);
		free(s);
	}
	checkMemory();

	ft_printf("test4: ");
	s = ft_strtrim("     xxxx    xxx", " x");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();

	ft_printf("test5: ");
	s = ft_strtrim("", "123");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();

	ft_printf("test6: ");
	s = ft_strtrim("123", "");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, "123"));
		checkSize(s, sizeof(char) * 4);
		free(s);
	}
	checkMemory();
	
	ft_printf("test7: ");
	s = ft_strtrim("", "");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();

	ft_printf("test8: ");
	s = ft_strtrim("abcdba", "acb");
	if (s == NULL)
		ft_printf(RED "NKO" RESET);
	else
	{
		check(!strcmp(s, "d"));
		checkSize(s, sizeof(char) * 2);
		free(s);
	}
	checkMemory();
	write(1, "\n", 1);
}
