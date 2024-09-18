/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmoveTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:01:23 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 15:15:27 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memmoveTest()
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = {0,  0,  0,  0,  0,  0, 0};
	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	printf("test1: ");
	if (ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test4: ");
	if (ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7))
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}