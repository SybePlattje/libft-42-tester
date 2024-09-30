/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoinTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:02:29 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:46:03 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strjoinTest()
{
	ft_printf("test1: ");
	char *s = ft_strjoin("Hello ", "42");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, "Hello 42"));
		checkSize(s, sizeof(char) * 9);
		free(s);
	}
	checkMemory();
	
	ft_printf("test2: ");
	s = ft_strjoin("", "42");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s,"42"));
		checkSize(s, sizeof(char) * 3);
		free(s);
	}
	checkMemory();

	ft_printf("test3: ");
	s = ft_strjoin("42", "");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s,"42"));
		checkSize(s, sizeof(char) * 3);
		free(s);
	}
	checkMemory();

	ft_printf("test4: ");
	s = ft_strjoin("", "");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s,""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();
	write(1, "\n", 1);
}
