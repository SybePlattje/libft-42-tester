/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcatTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:47:21 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlcatTest()
{
	char dest[30];
	memset(dest, 0, 30);
	char *src = (char *)"AAAAAAAAA";

	ft_printf("test1: ");
	dest[0] = 'B';
	if (ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test2: ");
	dest[0] = 'B';
	if (ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test3: ");
	memset(dest, 'B', 4);
	if (ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO" RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test4: ");
	if(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test5: ");
	memset(dest, 'C', 5);
	if (ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test6: ");
	memset(dest, 'C', 15);
	if (ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test7: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test8: ");
	memset(dest, 0, 30); 
	memset(dest, '1', 10);
	if (ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test9: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	if (ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test10: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	if (ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test11: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test12: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test13: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test14: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test15: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test16: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123"))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);

	ft_printf("test17: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""))
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}