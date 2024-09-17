/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteriTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:46:16 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 10:07:23 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void testIterFunction(unsigned int index, char *string)
{
	*string += index;
}

void striteriTest()
{
	printf("test1: ");
	char test1[] = "";
	ft_striteri(test1, &testIterFunction);
	if (!strcmp(test1, ""))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	char test2[] = "0";
	ft_striteri(test2, &testIterFunction);
	if (!strcmp(test2, "0"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	char test3[] = "0000000000";
	ft_striteri(test3, &testIterFunction);
	if (!strcmp(test3, "0123456789"))
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}
