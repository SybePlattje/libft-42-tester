/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:12 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:14:53 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
static char addOne(unsigned int index, char c)
{
	return index + c;
}

void strmapiTest()
{
	char *s = ft_strmapi("1234", addOne);
	ft_printf("test1: ");
	if (s == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(s, "1357"));
		checkSize(s, sizeof(char) * 5);
		free(s);
	}
	checkMemory();

	ft_printf("test2: ");
	s = ft_strmapi("", addOne);
	if (s == NULL)
		ft_printf(RED "NKO\n" RESET);
	else
	{
		check(!strcmp(s, ""));
		checkSize(s, sizeof(char) * 1);
		free(s);
	}
	checkMemory();
	write(1, "\n", 1);
}
