/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigitTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:00:05 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 20:12:38 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void isdigitTest()
{
	char test1 = '4';
	int test2 = 50;
	char test3 = '0';
	char test4 = '9';
	int test5 = 9;
	int test6 = 0;

	int standard = isdigit(test1);
	int testFunction = ft_isdigit(test1);
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

	standard = isdigit(test2);
	testFunction = ft_isdigit(test2);
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

	standard = isdigit(test3);
	testFunction = ft_isdigit(test3);
	ft_printf("test3: ");
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

	standard = isdigit(test4);
	testFunction = ft_isdigit(test4);
	ft_printf("test4: ");
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

	standard = isdigit(test5);
	testFunction = ft_isdigit(test5);
	ft_printf("test5: ");
	check(!standard && !testFunction);
	checkMemory();

	standard = isdigit(test6);
	testFunction = ft_isdigit(test6);
	ft_printf("test6: ");
	check(!standard && !testFunction);
	checkMemory();
	write(1, "\n", 1);
}
