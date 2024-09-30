/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchrTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:24 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:33:44 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strrchrTest()
{
	char s[] = "hello";
	char s2[] = "lhelltl";
	char s3[] = "";
	
	ft_printf("test1: ");
	check(ft_strrchr(s, 'h') == s);
	checkMemory();
	
	ft_printf("test2: ");
	check(ft_strrchr(s, 'l') == s + 3);
	checkMemory();

	ft_printf("test3: ");
	check(ft_strrchr(s2, 'l') == s2 + 6);
	checkMemory();

	ft_printf("test4: ");
	check(ft_strrchr(s, 'z') == NULL);
	checkMemory();
	
	ft_printf("test5: ");
	check(ft_strrchr(s, 0) == s + strlen(s));
	checkMemory();

	ft_printf("test6: ");
	check(ft_strrchr(s, 'h' + 256) == s);
	checkMemory();

	ft_printf("test7: ");
	char *empty = (char *)calloc(1, 1);
	if (empty == NULL)
	{
		ft_printf(RED "Malloc eroror in strrchr tester\n");
		return;
	}
	check(ft_strrchr(empty, 'V') == NULL);
	free(empty);
	checkMemory();

	ft_printf("test8: ");
	check(ft_strrchr(s3, 0) == s3);
	checkMemory();
	write(1, "\n", 1);
}
