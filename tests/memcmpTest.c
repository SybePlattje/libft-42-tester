/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmpTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:00:28 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 14:54:27 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void memcmpTest()
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("test1: ");
	if (!ft_memcmp(s, sCpy, 4))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	if (!ft_memcmp(s, s2, 0))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test3: ");
	if (ft_memcmp(s, s2, 1) > 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test4: ");
	if (ft_memcmp(s2, s, 1) < 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test5: ");
	if (ft_memcmp(s2, s3, 4) != 0)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	
}
