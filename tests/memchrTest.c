/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:59:38 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 14:34:45 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memchrTest()
{
	char string[] = {0, 1, 2, 3, 4, 5};
	printf("test1: ");
	char *output = (char *)ft_memchr(string, 0, 0);
	if (output == NULL)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	output = (char *)ft_memchr(string, 0, 1);
	if (output == string)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test3: ");
	output = (char *)ft_memchr(string, 2, 3);
	if (output == string + 2)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	output = (char *)ft_memchr(string, 6, 6);
	if (output == NULL)
	 printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test5: ");
	output = (char *)ft_memchr(string, 2 + 256, 3);
	if (output == string + 2)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	
}
