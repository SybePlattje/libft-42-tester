/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpyTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:24 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:12:13 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlcpyTest()
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);

	ft_printf("test1: ");
	check(ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A');
	checkMemory();

	ft_printf("test2: ");
	check(ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A');
	checkMemory();

	ft_printf("test3: ");
	check(ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A');
	checkMemory();

	ft_printf("test4: ");
	check(ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A');
	checkMemory();

	ft_printf("test5: ");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0);
	checkMemory();

	ft_printf("test6: ");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7));
	checkMemory();

	ft_printf("test7: ");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7));
	checkMemory();

	ft_printf("test8: ");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1));
	checkMemory();

	ft_printf("test9: ");
	memset(dest, 0, 10);
	check(ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0);
	checkMemory();
	write(1, "\n", 1);
}
