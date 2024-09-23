/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpyTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:24 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:43:47 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlcpyTest()
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);

	ft_printf("test1: ");
	if (ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test2: ");
	if (ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test3: ");
	if (ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test4: ");
	if (ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test5: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test6: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test7: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test8: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test9: ");
	memset(dest, 0, 10);
	if (ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}