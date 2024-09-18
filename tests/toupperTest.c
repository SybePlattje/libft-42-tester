/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupperTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:07:20 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 09:36:17 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void toupperTest()
{
		printf("test1: ");
	if (ft_toupper('a' - 1) == 'a' - 1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	if (ft_toupper('a') == 'A')
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	if (ft_toupper('z' + 1) == 'z' + 1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_toupper('z') == 'Z')
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}
