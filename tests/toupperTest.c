/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupperTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:07:20 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:49:24 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void toupperTest()
{
	ft_printf("test1: ");
	check(ft_toupper('a' - 1) == 'a' - 1);
	checkMemory();
	
	ft_printf("test2: ");
	check(ft_toupper('a') == 'A');
	checkMemory();

	ft_printf("test3: ");
	check(ft_toupper('z' + 1) == 'z' + 1);
	checkMemory();

	ft_printf("test4: ");
	check(ft_toupper('z') == 'Z');
	checkMemory();
	write(1, "\n", 1);
}
