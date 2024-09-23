/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdeloneTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:46:28 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:52:37 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstdeloneTest()
{
	ft_printf("test1: ");
	t_list *l = ft_lstnew(malloc(1));
	ft_lstdelone(l, free);
	l = 0;
	if (l == NULL)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}