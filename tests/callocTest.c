/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callocTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 20:12:13 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void callocTest()
{
	ft_printf("test1: ");
	void *test = ft_calloc(0, sizeof(int));
	if (test == NULL)
		ft_printf(RED "NKO " RESET);
	else
	{
		ft_printf(GREEN "OK " RESET);
		free(test);
	}
	checkMemory();

	ft_printf("test2: ");
	test = ft_calloc(2, ULONG_MAX);
	if (test == NULL)
		ft_printf(GREEN "OK " RESET);
	else
	{
		ft_printf(RED "KO " RESET);
		free(test);
	}
	checkMemory();

	ft_printf("test3: ");
	test = ft_calloc(24, sizeof(int));
	if (test == NULL)
		ft_printf(RED "KO " RESET);
	else
	{
		ft_printf(GREEN "OK " RESET);
		free(test);
	}
	checkMemory();
	write(1, "\n", 1);
}

