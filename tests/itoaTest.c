/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoaTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:02:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 20:18:06 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void itoaTest()
{
	char *output = ft_itoa(0);
	ft_printf("test1: ");
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(output[0] == '0' && output[1] == '\0');
		checkSize(output, sizeof(char) * 2);
		free(output);
		checkMemory();
	}

	ft_printf("test2: ");
	output = ft_itoa(-3442);
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(output, "-3442") && output[5] == '\0');
		checkSize(output, sizeof(char) * 6);
		free(output);
		checkMemory();
	}

	ft_printf("test3: ");
	output = ft_itoa(INT_MIN);
	if (output == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		check(!strcmp(!strcmp(output, "-2147483648") && output[11] == '\0'));
		checkSize(output, sizeof(char) * 12);
		free(output);
		checkMemory();
	}

	ft_printf("test4: ");
	output = ft_itoa(INT_MAX);
	if (output == NULL)
		ft_printf(RED "NKO\n" RESET);
	else
	{
		check(!strcmp(!strcmp(output, "2147483647") && output[10] == '\0'));
		checkSize(output, sizeof(char) * 11);
		free(output);
		checkMemory();
	}
	write(1, "\n", 1);
}
