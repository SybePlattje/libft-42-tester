/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiterTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:02 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:19:37 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void addLstOne(void *p)
{
	++*(int*)p;
}

void lstiterTest()
{
	int tab[] = {0, 1, 2, 3};
	t_list *l = ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	ft_lstiter(l, addLstOne);
	t_list *tmp = l;
	for (int i = 0; i < 4; ++i)
	{
		ft_printf("test%d: ", i);
		check(*(int*)tmp->content == i + 1);
		checkSize(tmp, sizeof(t_list));
		tmp = (t_list *)tmp->next;
	}
	freeList(l);
	checkMemory();
	write(1, "\n", 1);
}
