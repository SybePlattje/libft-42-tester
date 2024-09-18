/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchrTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:05:24 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 09:07:23 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strrchrTest()
{
	char s[] = "hello";
	char s2[] = "lhelltl";
	char s3[] = "";
	
	printf("test1: ");
	if (ft_strrchr(s, 'h') == s)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_strrchr(s, 'l') == s + 3)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_strrchr(s2, 'l') == s2 + 6)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_strrchr(s, 'z') == NULL)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test5: ");
	if (ft_strrchr(s, 0) == s + strlen(s))
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test6: ");
	if (ft_strrchr(s, 'h' + 256) == s)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test7: ");
	char *empty = (char *)calloc(1, 1);
	if (empty == NULL)
	{
		printf(RED "Malloc eroror in strrchr tester\n");
		return;
	}
	if (ft_strrchr(empty, 'V') == NULL)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	free(empty);
	
	printf("test8: ");
	if (ft_strrchr(s3, 0) == s3)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
}