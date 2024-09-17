/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:58:27 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 13:40:37 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strchrTest()
{
	char *test1 = "hello how are you";
	char *standart = strchr(test1, 'w');
	char *testFunction = ft_strchr(test1, 'w');
	printf("test1: ");
	if (strcmp(standart, testFunction) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	char *test2 = "";
	char *testFunction2 = ft_strchr(test2, 'w');
	printf("test2: ");
	if (testFunction2 == NULL)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	char *test3 = "hello";
	char *testFunction3 = ft_strchr(test3, 'w');
	printf("test3: ");
	if (testFunction3 == NULL)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	//TODO check for memory
}
