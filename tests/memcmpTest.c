/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmpTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:00:28 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 20:31:02 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memcmpTest()
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	ft_printf("test1: ");
	check(!ft_memcmp(s, sCpy, 4));
	checkMemory();

	ft_printf("test2: ");
	check(!ft_memcmp(s, s2, 0));
	checkMemory();

	ft_printf("test3: ");
	check(ft_memcmp(s, s2, 1) > 0);
	checkMemory();

	ft_printf("test4: ");
	check(ft_memcmp(s2, s, 1) < 0);
	checkMemory();

	ft_printf("test5: ");
	check(ft_memcmp(s2, s3, 4) != 0);
	checkMemory();
	write(1, "\n", 1);
}
