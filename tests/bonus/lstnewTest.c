/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnewTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:43 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:22:53 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstnewTest()
{
	t_list *l = ft_lstnew((void *)42);
	ft_printf("test1: ");
	check(l->content == (void *)42);
	checkSize(l, sizeof(t_list));

	ft_printf("test2: ");
	check(l->next == 0);
	free(l);
	checkMemory();
	write(1, "\n", 1);
}