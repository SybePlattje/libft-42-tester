/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsetTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:01:55 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 08:46:29 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memsetTest()
{
	char tab[100];
	memset(tab, 0, 100);
	
	ft_printf("test1: ");
	ft_memset(tab, 'A', 0);
	check(tab[0] == 0);
	checkMemory();
	
	ft_printf("test2: ");
	ft_memset(tab, 'A', 42);
	int i = 0;
	for (; i < 100 && tab[i] == 'A'; ++i)
		;
	check(i == 42 && tab[42] == 0);
	checkMemory();
	write(1, "\n", 1);
}
