/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprintTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:00:11 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 08:42:50 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isprintTest()
{
	int test1 = 32;
	int test2 = 126;
	int test3 = 0;
	int test4 = 200;
	int test5 = -1;
	int test6 = 31;
	int test7 = 127;

	int standard = isprint(test1);
	int testFunction = ft_isprint(test1);
	ft_printf("test1: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			ft_printf(GREEN "OK " RESET);
		else 
			ft_printf(YELLOW "OK, but different return value " RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	checkMemory();
	
	standard = isprint(test2);
	testFunction = ft_isprint(test2);
	ft_printf("test2: ");
	if (standard && testFunction)
	{
		if (standard == testFunction)
			ft_printf(GREEN "OK " RESET);
		else 
			ft_printf(YELLOW "OK, but different return value " RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	checkMemory();

	standard = isprint(test3);
	testFunction = ft_isprint(test3);
	ft_printf("test3: ");
	check(!standard && !testFunction);
	checkMemory();

	standard = isprint(test4);
	testFunction = ft_isprint(test4);
	ft_printf("test4: ");
	check(!standard && !testFunction);
	checkMemory();

	standard = isprint(test5);
	testFunction = ft_isprint(test5);
	ft_printf("test5: ");
	check(!standard && !testFunction);
	checkMemory();

	standard = isprint(test6);
	testFunction = ft_isprint(test6);
	ft_printf("test6: ");
	check(!standard && !testFunction);
	checkMemory();

	standard = isprint(test7);
	testFunction = ft_isprint(test7);
	ft_printf("test7: ");
	check(!standard && !testFunction);
	checkMemory();
	write(1, "\n", 1);
}
