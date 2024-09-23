/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:59:38 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 20:23:24 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memchrTest()
{
	char string[] = {0, 1, 2, 3, 4, 5};
	ft_printf("test1: ");
	char *output = (char *)ft_memchr(string, 0, 0);
	check(output == NULL);
	checkMemory();
	
	ft_printf("test2: ");
	output = (char *)ft_memchr(string, 0, 1);
	check(output == string);
	checkMemory();
	
	ft_printf("test3: ");
	output = (char *)ft_memchr(string, 2, 3);
	check(output == string + 2);
	checkMemory();

	ft_printf("test4: ");
	output = (char *)ft_memchr(string, 6, 6);
	check(output == NULL);
	checkMemory();

	ft_printf("test5: ");
	output = (char *)ft_memchr(string, 2 + 256, 3);
	check(output == string + 2);
	checkMemory();
	write(1, "\n", 1);
}
