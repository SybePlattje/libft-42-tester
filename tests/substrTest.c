/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:32 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 09:31:05 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void substrTest()
{
	printf("tets1: ");
	char *s = ft_substr("hello", 0, 42000);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "hello"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test2: ");
	s = ft_substr("hello", 1, 1);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "e"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test3: ");
	char *str = strdup("1");
	if (str == NULL)
	{
		printf("Malloc error in substr test\n");
		return;
	}
	s = ft_substr(str, 42, 42000000);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
		free(str);
	}

	printf("test4: ");
	str = strdup("0123456789");
	if (str == NULL)
	{
		printf("Malloc error in substr test\n");
		return;
	}
	s = ft_substr(str, 9, 10);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "9"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
		free(str);
	}

	printf("test10: ");
	s = ft_substr("42", 0, 0);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test11: ");
	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "LES HARICOTS !"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test12: ");
	s = ft_substr("test", 1, 2);
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "es"))
			printf(GREEN "OK\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(s);
	}
}
