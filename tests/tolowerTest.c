/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolowerTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:06:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 09:35:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void tolowerTest()
{
	printf("test1: ");
	if (ft_tolower('A' - 1) == 'A' - 1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_tolower('A') == 'a')
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_tolower('Z' + 1) == 'Z' + 1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_tolower('Z') == 'z')
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}