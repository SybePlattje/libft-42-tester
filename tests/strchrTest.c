/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:58:27 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:34:04 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strchrTest()
{
	char *test1 = "hello how are you";
	char *standart = strchr(test1, 'w');
	char *testFunction = ft_strchr(test1, 'w');
	ft_printf("test1: ");
	check(!strcmp(standart, testFunction));
	checkMemory();
	
	char *test2 = "";
	char *testFunction2 = ft_strchr(test2, 'w');
	ft_printf("test2: ");
	check(testFunction2 == NULL);
	checkMemory();
	
	char *test3 = "hello";
	char *testFunction3 = ft_strchr(test3, 'w');
	ft_printf("test3: ");
	check(testFunction3 == NULL);
	checkMemory();
	write(1, "\n", 1);
}
