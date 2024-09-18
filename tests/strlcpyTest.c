/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpyTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:24 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 17:03:10 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlcpyTest()
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);

	printf("test1: ");
	if (ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A')
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A')
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A')
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test4: ");
	if (ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test5: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test6: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7))
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test7: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7))
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test8: ");
	memset(dest, 'A', 10);
	if (ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1))
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test9: ");
	memset(dest, 0, 10);
	if (ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
}