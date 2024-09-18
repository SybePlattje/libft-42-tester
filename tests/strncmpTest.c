/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmpTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:31 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 17:26:50 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strncmpTest()
{
	printf("test1: ");
	if (ft_strncmp("t", "", 0) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_strncmp("1234", "1235", 3) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test3: ");
	if (ft_strncmp("1234", "1235", 4) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_strncmp("1234", "1235", -1) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test5: ");
	if (ft_strncmp("", "", 42) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test6:");
	if (ft_strncmp("Hello", "Hello", 42) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test7: ");
	if (ft_strncmp("Hello", "hello", 42) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test8: ");
	if (ft_strncmp("Hello", "HelLo", 42) > 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test9: ");
	if (ft_strncmp("Hello", "HellO", 42) > 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test10: ");
	if (ft_strncmp("Hello", "HelloX", 42) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test11: ");
	if (ft_strncmp("Hello", "Hell", 42) > 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test12: ");
	if (ft_strncmp("", "1", 0) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test13: ");
	if (ft_strncmp("1", "", 0) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test14: ");
	if (ft_strncmp("", "1", 1) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test15: ");
	if (ft_strncmp("1", "", 1) > 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test16: ");
	if (ft_strncmp("", "", 1) == 0)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}
