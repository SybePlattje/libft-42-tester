/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchrTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:58:27 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:14:17 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strchrTest()
{
	char *test1 = "hello how are you";
	char *standart = strchr(test1, 'w');
	char *testFunction = ft_strchr(test1, 'w');
	ft_printf("test1: ");
	if (strcmp(standart, testFunction) == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	char *test2 = "";
	char *testFunction2 = ft_strchr(test2, 'w');
	ft_printf("test2: ");
	if (testFunction2 == NULL)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	char *test3 = "hello";
	char *testFunction3 = ft_strchr(test3, 'w');
	ft_printf("test3: ");
	if (testFunction3 == NULL)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
