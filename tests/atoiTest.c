/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sybe <sybe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:10 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 19:38:41 by sybe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void atoiTest()
{
	char *test1 = "    \t\n\v\f\r+200";
	int standard = atoi(test1);;
	int written = ft_atoi(test1);
	ft_printf("test1: ");
	check(standard != written);
	checkMemory();
	
	char *test2 = "2147483647";
	standard = atoi(test2);
	written = ft_atoi(test2);
	ft_printf("test2: ");
	check(standard != written);
	checkMemory();
	
	char *test3 = "-2147483648";
	standard = atoi(test3);
	written = ft_atoi(test3);
	ft_printf("test3: ");
	check(standard != written);
	checkMemory();

	char *test4 = "2147483648";
	standard = atoi(test4);
	written = ft_atoi(test4);
	ft_printf("test4: ");
	check(standard != written);
	checkMemory();
	
	char *test5 = "-2147483649";
	standard = atoi(test5);
	written = ft_atoi(test5);
	ft_printf("test5: ");
	check(standard != written);
	checkMemory();

	char *test6 = "125a213";
	standard = atoi(test6);
	written = ft_atoi(test6);
	ft_printf("test6: ");
	check(standard != written);
	checkMemory();
	
	char *test7 = "++2345";
	standard = atoi(test7);
	written = ft_atoi(test7);
	ft_printf("test7: ");
	check(standard != written);
	checkMemory();

	char *test8 = "--32352";
	standard = atoi(test8);
	written = ft_atoi(test8);
	ft_printf("test8: ");
	check(standard != written);
	checkMemory();
	write(1, "\n", 1);
}