/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmapTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:09 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 17:10:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void *addLstOneMap(void *p)
{
	void *r = malloc(sizeof(int));
	*(int *)r = *(int *)p + 1;
	return (r);
}

void lstmapTest()
{
	int tab[] = {0, 1, 2, 3};
	t_list *l = ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list *m = ft_lstmap(l, addLstOneMap, free);
	t_list *tmp = l;
	for (int i = 0; i < 4; ++i)
	{
		ft_printf("test%d: ", i);
		if (*(int *)tmp->content == i)
			ft_printf(GREEN "OK " RESET);
		else
			ft_printf(RED "KO " RESET);
		tmp = (t_list *)tmp->next;
	}

	tmp = m;
	for (int i = 0; i < 4; ++i)
	{
		ft_printf("test%d: ", i + 4);
		if (*(int*)tmp->content == i + 1)
		{
			ft_printf(GREEN "OK " RESET);
			int sizeCheck = checkSize(tmp, sizeof(t_list));
			if (sizeCheck == 1)
				ft_printf(GREEN "SOK " RESET);
			else if (sizeCheck == 2)
				ft_printf(RED "SKO " RESET);
			else
				ft_printf (RED "NKO " RESET);
		}
		else
			ft_printf(RED "KO " RESET);
		tmp = (t_list *)tmp->next;
	}
	freeList(l);
	ft_lstclear(&m, free);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}