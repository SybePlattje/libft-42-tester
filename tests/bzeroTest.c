/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzeroTest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:45:09 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 12:36:09 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void bzeroTest()
{
	char	test[5];
	bool	failed = false;
	ft_bzero(test, 5);
	printf("test1: ");
	for (int i = 0; i < 5; i++)
	{
		if (test[i] != 0)
		{
			failed = true;
			printf(RED "KO " RESET);
			printf("index is: %d test[i] is %d ", i, test[i]);
		}
	}
	if (!failed)
		printf(GREEN "OK " RESET);

	failed = false;
	char test2[100];
	memset(test2, 'A', 100);
	ft_bzero(test2, 0);
	printf("test2: ");
	if (test2[0] != 'A')
	{
		failed = true;
		printf(RED "KO " RESET);
		printf("index is: 0 test2[0] is %d ", test2[0]);
	}
	if (!failed)
		printf(GREEN "OK " RESET);

	failed = false;
	ft_bzero(test2, 42);
	int index = 0;
	printf("test3: ");
	for(; index < 100 && test2[index] == 0; ++index)
		;
	if (index != 42 && test2[42 != 'A'])
	{
		failed = true;
		printf(RED "KO " RESET);
		printf("index is: %d test2[index] is %d\n", index, test2[index]);
	}
	if (!failed)
		printf(GREEN "OK\n" RESET);
	// TODO add memcheck
}
