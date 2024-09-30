/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdeloneTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:46:28 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:18:19 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstdeloneTest()
{
	ft_printf("test1: ");
	t_list *l = ft_lstnew(malloc(1));
	ft_lstdelone(l, free);
	l = 0;
	check(l == NULL);
	checkMemory();
	write(1, "\n", 1);
}