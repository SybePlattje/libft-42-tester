/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:36:57 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 14:45:35 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void strlenTest()
{
	char *test1 = "dfadsfsa";
	size_t standard =  strlen(test1);
	size_t testFunction = ft_strlen(test1);
	ft_printf("test1: ");
	if (standard == testFunction)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	char *test2 = "";
	standard = strlen(test2);
	testFunction = ft_strlen(test2);
	ft_printf("test2: ");
	if (standard == testFunction)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
