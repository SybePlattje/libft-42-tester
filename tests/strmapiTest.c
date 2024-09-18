/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapiTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:04:12 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 17:12:10 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
static char addOne(unsigned int index, char c)
{
	return index + c;
}

void strmapiTest()
{
	char *s = ft_strmapi("1234", addOne);
	printf("test1: ");
	if (s == NULL)
		printf(RED "NKO " RESET);
	else
	{
		if (!strcmp(s, "1357"))
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO" RESET);
		free(s);
	}

	printf("test2: ");
	s = ft_strmapi("", addOne);
	if (s == NULL)
		printf(RED "NKO\n" RESET);
	else
	{
		if (!strcmp(s, ""))
			printf(GREEN "OK\n" RESET);
		else
			printf(RED "KO\n" RESET);
		free(s);
	}
}