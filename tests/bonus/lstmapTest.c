/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmapTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:09 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 11:05:25 by splattje         ###   ########.fr       */
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
		printf("test%d: ", i);
		if (*(int *)tmp->content == i)
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		tmp = (t_list *)tmp->next;
	}

	tmp = m;
	for (int i = 0; i < 4; ++i)
	{
		printf("test%d: ", i + 4);
		if (*(int*)tmp->content == i + 1)
			printf(GREEN "KO " RESET);
		else
			printf(RED "KO " RESET);
		tmp = (t_list *)tmp->next;
	}
	printf("\n");
	freeList(l);
	ft_lstclear(&m, free);
}