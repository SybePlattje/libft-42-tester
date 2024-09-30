/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmpTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:31 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:22:18 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strncmpTest()
{
	ft_printf("test1: ");
	check(ft_strncmp("t", "", 0) == 0);
	checkMemory();
	
	ft_printf("test2: ");
	check(ft_strncmp("1234", "1235", 3) == 0);
	checkMemory();
	
	ft_printf("test3: ");
	check(ft_strncmp("1234", "1235", 4) < 0);
	checkMemory();

	ft_printf("test4: ");
	check(ft_strncmp("1234", "1235", -1) < 0);
	checkMemory();

	ft_printf("test5: ");
	check(ft_strncmp("", "", 42) == 0);
	checkMemory();

	ft_printf("test6:");
	check(ft_strncmp("Hello", "Hello", 42) == 0);
	checkMemory();
	
	ft_printf("test7: ");
	check(ft_strncmp("Hello", "hello", 42) < 0);
	checkMemory();

	ft_printf("test8: ");
	check(ft_strncmp("Hello", "HelLo", 42) > 0);
	checkMemory();

	ft_printf("test9: ");
	check(ft_strncmp("Hello", "HellO", 42) > 0);
	checkMemory();

	ft_printf("test10: ");
	check(ft_strncmp("Hello", "HelloX", 42) < 0);
	checkMemory();

	ft_printf("test11: ");
	check(ft_strncmp("Hello", "Hell", 42) > 0);
	checkMemory();

	ft_printf("test12: ");
	check(ft_strncmp("", "1", 0) == 0);
	checkMemory();

	ft_printf("test13: ");
	check(ft_strncmp("1", "", 0) == 0);
	checkMemory();

	ft_printf("test14: ");
	check(ft_strncmp("", "1", 1) < 0);
	checkMemory();

	ft_printf("test15: ");
	check(ft_strncmp("1", "", 1) > 0);
	checkMemory();

	ft_printf("test16: ");
	check(ft_strncmp("", "", 1) == 0);
	checkMemory();
	write(1, "\n", 1);
}
