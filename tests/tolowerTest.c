/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolowerTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:47:31 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void tolowerTest()
{
	ft_printf("test1: ");
	check(ft_tolower('A' - 1) == 'A' - 1);
	checkMemory();
	
	ft_printf("test2: ");
	check(ft_tolower('A') == 'a');
	checkMemory();

	ft_printf("test3: ");
	check(ft_tolower('Z' + 1) == 'Z' + 1);
	checkMemory();

	ft_printf("test4: ");
	check(ft_tolower('Z') == 'z');
	checkMemory();
	write(1, "\n", 1);
}
