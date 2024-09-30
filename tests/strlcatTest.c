/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcatTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:57:19 by splattje         ###   ########.fr       */
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
	check(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"));
	checkMemory();

	ft_printf("test2: ");
	dest[0] = 'B';
	check(ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"));
	checkMemory();
	
	ft_printf("test3: ");
	memset(dest, 'B', 4);
	check(ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"));
	checkMemory();
	
	ft_printf("test4: ");
	check(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"));
	checkMemory();
	
	ft_printf("test5: ");
	memset(dest, 'C', 5);
	check(ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"));
	checkMemory();

	ft_printf("test6: ");
	memset(dest, 'C', 15);
	check(ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA"));
	checkMemory();

	ft_printf("test7: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, ""));
	checkMemory();

	ft_printf("test8: ");
	memset(dest, 0, 30); 
	memset(dest, '1', 10);
	check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	checkMemory();

	ft_printf("test9: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	check(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"));
	checkMemory();

	ft_printf("test10: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	check(ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111"));
	checkMemory();

	ft_printf("test11: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""));
	checkMemory();
	
	ft_printf("test12: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, ""));
	checkMemory();

	ft_printf("test13: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, ""));
	checkMemory();
	
	ft_printf("test14: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1"));
	checkMemory();
	
	ft_printf("test15: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"));
	checkMemory();

	ft_printf("test16: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123"));
	checkMemory();

	ft_printf("test17: ");
	memset(dest, 0, 30);
	check(ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""));
	checkMemory();
	write(1, "\n", 1);
}
