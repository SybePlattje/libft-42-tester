/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpyTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:00:58 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 12:16:21 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memcpyTest()
{
	char dest[100];
	memset(dest, 'A', 100);

	ft_printf("test1: ");
	ft_memcpy(dest, "coucou", 0);
	if (dest[0] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test2: ");
	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
	if (rtn == dest && dest[0] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test3: ");
	char src[] = {0, 0};
	ft_memcpy(dest, src, 2);
	int i = 0;
	for (; i < 100 && dest[i] == 0; ++i)
		;
	if (i == 2 && dest[2] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}