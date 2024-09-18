/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrimTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:48 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 09:18:27 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strtrimTest()
{
	printf("test1: ");
	char *s = ft_strtrim("   xxxhello", " x");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "hello"))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test2: ");
	s = ft_strtrim("    xxxhello    xxx", " x");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "hello"))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test3: ");
	s = ft_strtrim("   xxxxhello  xxxx", " x");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "hello"))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test4: ");
	s = ft_strtrim("     xxxx    xxx", " x");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test5: ");
	s = ft_strtrim("", "123");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test6: ");
	s = ft_strtrim("123", "");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "123"))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}
	printf("test7: ");
	s = ft_strtrim("", "");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test8: ");
	s = ft_strtrim("abcdba", "acb");
	if (s == NULL)
		printf(RED "NKO" RESET);
	else
	{
		if (!strcmp(s, "d"))
			printf(GREEN "KO\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(s);
	}
}