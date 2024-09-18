/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsetTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:01:55 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 15:23:28 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memsetTest()
{
	char tab[100];
	memset(tab, 0, 100);
	
	printf("test1: ");
	ft_memset(tab, 'A', 0);
	if (tab[0] == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	ft_memset(tab, 'A', 42);
	int i = 0;
	for (; i < 100 && tab[i] == 'A'; ++i)
		;
	if (i == 42 && tab[42] == 0)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}