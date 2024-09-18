/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstrTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:04 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 08:55:31 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strnstrTest()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	char *empty = (char *)"";
	printf("test1: ");
	if (ft_strnstr(haystack, needle, 0) == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	if (ft_strnstr(haystack, needle, -1) == haystack + 1)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_strnstr(haystack, "a", -1) == haystack)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_strnstr(haystack, "c", -1) == haystack + 4)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test5: ");
	if (ft_strnstr(empty, "", -1) == empty)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test6: ");
	if (ft_strnstr(empty, "", 0) == empty)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test7: ");
	if (ft_strnstr(empty, "coucou", -1) == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test8: ");
	if (ft_strnstr(haystack, "aaabc", 5) == haystack)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test9: ");
	if (ft_strnstr(empty, "12345", 5) == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test10: ");
	if (ft_strnstr(haystack, "abcd", 9) == haystack + 5)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test11: ");
	if (ft_strnstr(haystack, "cd", 8) == NULL)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test12: ");
	if (ft_strnstr(haystack, "a", 1) == haystack)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test13: ");
	if (ft_strnstr("1", "a", 1) == NULL)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test14: ");
	if (ft_strnstr("22", "b", 2) == NULL)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
}
