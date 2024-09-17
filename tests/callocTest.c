/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callocTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:07:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 11:08:56 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void callocTest()
{
	printf("test1: ");
	void *test = ft_calloc(0, sizeof(int));
	if (test == NULL)
		printf(RED "KO " RESET);
	else
	{
		printf(GREEN "KO " RESET);
		free(test);
	}

	printf("test2: ");
	test = ft_calloc(2, ULONG_MAX);
	if (test == NULL)
		printf(GREEN "OK " RESET);
	else
	{
		printf(RED "KO " RESET);
		free(test);
	}

	printf("test3: ");
	test = ft_calloc(24, sizeof(int));
	if (test == NULL)
		printf(RED "KO\n" RESET);
	else
	{
		printf(GREEN "OK\n" RESET);
		free(test);
	}
}

