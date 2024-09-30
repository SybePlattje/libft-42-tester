/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:36:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 10:13:14 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlenTest()
{
	char *test1 = "dfadsfsa";
	size_t standard =  strlen(test1);
	size_t testFunction = ft_strlen(test1);
	ft_printf("test1: ");
	check(standard == testFunction);
	checkMemory();
	
	char *test2 = "";
	standard = strlen(test2);
	testFunction = ft_strlen(test2);
	ft_printf("test2: ");
	check(standard == testFunction);
	checkMemory();
	write(1, "\n", 1);
}
