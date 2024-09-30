/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteriTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:46:16 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:42:20 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void testIterFunction(unsigned int index, char *string)
{
	*string += index;
}

void striteriTest()
{
	ft_printf("test1: ");
	char test1[] = "";
	ft_striteri(test1, &testIterFunction);
	check(!strcmp(test1, ""));
	checkMemory();

	ft_printf("test2: ");
	char test2[] = "0";
	ft_striteri(test2, &testIterFunction);
	check(!strcmp(test2, "0"));
	checkMemory();

	ft_printf("test3: ");
	char test3[] = "0000000000";
	ft_striteri(test3, &testIterFunction);
	check(!strcmp(test3, "0123456789"));
	checkMemory();
	write(1, "\n", 1);
}
