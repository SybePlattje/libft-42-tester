/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcatTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:03:00 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 16:52:50 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlcatTest()
{
	char dest[30];
	memset(dest, 0, 30);
	char *src = (char *)"AAAAAAAAA";

	printf("test1: ");
	dest[0] = 'B';
	if (ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	dest[0] = 'B';
	if (ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test3: ");
	memset(dest, 'B', 4);
	if (ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"))
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO" RESET);
	
	printf("test4: ");
	if(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test5: ");
	memset(dest, 'C', 5);
	if (ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test6: ");
	memset(dest, 'C', 15);
	if (ft_strlcat(dest, src, 17) == 24 && !strcmp(dest, "CCCCCCCCCCCCCCCA"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test7: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, src, 1) == strlen(src) && !strcmp(dest, ""))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test8: ");
	memset(dest, 0, 30); 
	memset(dest, '1', 10);
	if (ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test9: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	if (ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test10: ");
	memset(dest, 0, 30);
	memset(dest, '1', 10);
	if (ft_strlcat(dest, "", 15) == 10 && !strcmp(dest, "1111111111"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test11: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test12: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "", 0) == 0 && !strcmp(dest, ""))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test13: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 1) == 3 && !strcmp(dest, ""))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test14: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 2) == 3 && !strcmp(dest, "1"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test15: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test16: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 4) == 3 && !strcmp(dest, "123"))
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test17: ");
	memset(dest, 0, 30);
	if (ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""))
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO \n" RESET);
}