/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:36:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/16 17:00:20 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlenTest()
{
	char *test1 = "dfadsfsa";
	size_t standard =  strlen(test1);
	size_t testFunction = ft_strlen(test1);
	printf("test1: ");
	if (standard == testFunction)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	char *test2 = "";
	standard = strlen(test2);
	testFunction = ft_strlen(test2);
	printf("test2: ");
	if (standard == testFunction)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	
}