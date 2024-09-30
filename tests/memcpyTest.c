/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpyTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:00:58 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 08:42:06 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memcpyTest()
{
	char dest[100];
	memset(dest, 'A', 100);

	ft_printf("test1: ");
	ft_memcpy(dest, "coucou", 0);
	check(dest[0] == 'A');
	checkMemory();

	ft_printf("test2: ");
	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
	check(rtn == dest && dest[0] == 'A');
	checkMemory();

	ft_printf("test3: ");
	char src[] = {0, 0};
	ft_memcpy(dest, src, 2);
	int i = 0;
	for (; i < 100 && dest[i] == 0; ++i)
		;
	check(i == 2 && dest[2] == 'A');
	checkMemory();
	write(1, "\n", 1);
}