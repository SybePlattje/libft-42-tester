/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpyTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:00:58 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 15:05:25 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memcpyTest()
{
	char dest[100];
	memset(dest, 'A', 100);

	printf("test1: ");
	ft_memcpy(dest, "coucou", 0);
	if (dest[0] == 'A')
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	char *rtn = (char *)ft_memcpy(dest, NULL, 0);
	if (rtn == dest && dest[0] == 'A')
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test3: ");
	char src[] = {0, 0};
	ft_memcpy(dest, src, 2);
	int i = 0;
	for (; i < 100 && dest[i] == 0; ++i)
		;
	if (i == 2 && dest[2] == 'A')
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}