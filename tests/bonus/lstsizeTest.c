/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsizeTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:49:07 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:24:07 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void lstsizeTest()
{
	t_list *l = NULL;
	ft_printf("test1: ");
	check(ft_lstsize(l) == 0);
	
	ft_printf("test2: ");
	ft_lstadd_front(&l, ft_lstnew((void *)1));
	check(ft_lstsize(l) == 1);
	checkSize(l, sizeof(t_list));

	ft_printf("test3: ");
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	check(ft_lstsize(l) == 2);
	checkSize(l, sizeof(t_list));
	freeList(l);
	checkMemory();
	write(1, "\n", 1);
}
