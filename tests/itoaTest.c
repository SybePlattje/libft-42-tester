/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoaTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:02:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 15:16:13 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void itoaTest()
{
	char *output = ft_itoa(0);
	printf("test1: ");
	if (output == NULL)
		printf(RED "KO " RESET);
	else
	{
		if (output[0] == '0' && output[1] == '\0')
			printf (GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(output);
	}

	printf("test2: ");
	output = ft_itoa(-3442);
	if (output == NULL)
		printf(RED "KO " RESET);
	else
	{
		if (!strcmp(output, "-3442") && output[5] == '\0')
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(output);
	}

	printf("test3: ");
	output = ft_itoa(INT_MIN);
	if (output == NULL)
		printf(RED "KO " RESET);
	else
	{
		if (!strcmp(output, "-2147483648") && output[11] == '\0')
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		free(output);
	}

	printf("test4: ");
	output = ft_itoa(INT_MAX);
	if (output == NULL)
		printf(RED "KO\n" RESET);
	else
	{
		if (!strcmp(output, "2147483647") && output[10] == '\0')
			printf(GREEN "OK\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(output);
	}
}
