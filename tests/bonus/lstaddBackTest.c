/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddBackTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:37 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:24:48 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void lstaddBackTest()
{
	t_list *l = NULL;
	t_list *l2 = NULL;
	ft_printf("test1: ");
	ft_lstadd_back(&l, ft_lstnew((void *)1));
	check(l->content == (void *)1);
	checkSize(l, sizeof(t_list));

	ft_printf("test2: ");
	check(l->next == 0);

	ft_printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	check(l->content == (void *)1);
	checkSize(l, sizeof(t_list));
	
	ft_printf("test4: ");
	check(((t_list *)(l->next))->content == (void *)2);
	checkSize(l, sizeof(t_list));

	ft_printf("test5: ");
	check(((t_list *)(l->next))->next == 0);

	ft_printf("test6: ");
	ft_lstadd_back(&l2, ft_lstnew((void *)3));
	ft_lstadd_back(&l2, ft_lstnew((void *)4));
	ft_lstadd_back(&l, l2);
	check(l->content == (void *)1);
	checkSize(l, sizeof(t_list));

	ft_printf("test7: ");
	check(((t_list *)(l->next))->content == (void *)2);
	checkSize(l, sizeof(t_list));

	ft_printf("test8: ");
	check(((t_list *)(((t_list *)(l->next))->next))->content == (void*)3);
	checkSize(l, sizeof(t_list));
	
	ft_printf("test9: ");
	check(((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->content == (void*)4);
	checkSize(l, sizeof(t_list));

	ft_printf("test10: ");
	check(((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->next == 0);
	freeList(l);
	checkMemory();
	write(1, "\n", 1);
}
