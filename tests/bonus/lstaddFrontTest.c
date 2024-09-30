/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddFrontTest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:43:19 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:25:10 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void lstaddFrontTest()
{
	t_list *l = NULL;
	ft_printf("test1: ");
	ft_lstadd_front(&l ,ft_lstnew((void *)1));
	check(l->content == (void *)1);
	checkSize(l, sizeof(t_list));

	ft_printf("test2: ");
	check(l->next == NULL);
	checkSize(l, sizeof(t_list));

	ft_printf("test3: ");
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	check(l->content == (void *)2);
	checkSize(l, sizeof(t_list));
	
	ft_printf("test4: ");
	check(((t_list *)l->next)->content == (void*)1);
	checkSize(l, sizeof(t_list));

	ft_printf("test5: ");
	check(((t_list *)l->next)->next == 0);
	freeList(l);
	checkMemory();
	write(1, "\n", 1);
}
