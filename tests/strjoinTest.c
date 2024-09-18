/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:02:29 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 16:30:02 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strjoinTest()
{
	printf("test1: ");
	char *s = ft_strjoin("Hello ", "42");
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "Hello 42"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}
	
	printf("test2: ");
	s = ft_strjoin("", "42");
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,"42"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test3: ");
	s = ft_strjoin("42", "");
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,"42"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(s);
	}

	printf("test4: ");
	s = ft_strjoin("", "");
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s,""))
			printf(GREEN "OK\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(s);
	}
}