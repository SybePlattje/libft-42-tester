/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstrTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:04 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:29:22 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strnstrTest()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char *empty = (char *)"";

	ft_printf("test1: ");
	check(ft_strnstr(haystack, needle, 0) == 0);
	checkMemory();

	ft_printf("test2: ");
	check(ft_strnstr(haystack, needle, -1) == haystack + 1);
	checkMemory();

	ft_printf("test3: ");
	check(ft_strnstr(haystack, "a", -1) == haystack);
	checkMemory();

	ft_printf("test4: ");
	check(ft_strnstr(haystack, "c", -1) == haystack + 4);
	checkMemory();
	
	ft_printf("test5: ");
	check(ft_strnstr(empty, "", -1) == empty);
	checkMemory();

	ft_printf("test6: ");
	check(ft_strnstr(empty, "", 0) == empty);
	checkMemory();
	
	ft_printf("test7: ");
	check(ft_strnstr(empty, "coucou", -1) == 0);
	checkMemory();

	ft_printf("test8: ");
	check(ft_strnstr(haystack, "aaabc", 5) == haystack);
	checkMemory();

	ft_printf("test9: ");
	check(ft_strnstr(empty, "12345", 5) == 0);
	checkMemory();

	ft_printf("test10: ");
	check(ft_strnstr(haystack, "abcd", 9) == haystack + 5);
	checkMemory();

	ft_printf("test11: ");
	check(ft_strnstr(haystack, "cd", 8) == NULL);
	checkMemory();

	ft_printf("test12: ");
	check(ft_strnstr(haystack, "a", 1) == haystack);
	checkMemory();

	ft_printf("test13: ");
	check(ft_strnstr("1", "a", 1) == NULL);
	checkMemory();

	ft_printf("test14: ");
	check(ft_strnstr("22", "b", 2) == NULL);
	checkMemory();
	write(1, "\n", 1);
}
