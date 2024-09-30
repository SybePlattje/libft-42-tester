/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:32 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:42:43 by splattje         ###   ########.fr       */
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
		check(!strcmp(s, "hello"));
		checkSize(s, sizeof(char) * 6);
		free(s);
	}
	checkMemory();

	ft_printf("test2: ");
	s = ft_substr("hello", 1, 1);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, "e"));
		checkSize(s, sizeof(char) * 2);
		free(s);
	}
	checkMemory();

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
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
		free(str);
	}
	checkMemory();

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
		check(!strcmp(s, "9"));
		checkSize(s, sizeof(char) * 2);
		free(s);
		free(str);
	}
	checkMemory();

	ft_printf("test10: ");
	s = ft_substr("42", 0, 0);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();

	ft_printf("test11: ");
	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, "LES HARICOTS !"));
		checkSize(s, sizeof(char) * 15);
		free(s);
	}
	checkMemory();

	ft_printf("test12: ");
	s = ft_substr("test", 1, 2);
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, "es"));
		checkSize(s, sizeof(char) * 3);
		free(s);
	}
	checkMemory();
	write(1, "\n", 1);
}
