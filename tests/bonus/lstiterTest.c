/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiterTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:02 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:53:28 by splattje         ###   ########.fr       */
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
		printf("test%d: ", i);
		if (*(int*)tmp->content == i + 1)
			printf(GREEN "OK " RESET);
		else
			printf(RED "KO " RESET);
		tmp = (t_list *)tmp->next;
	}
	printf("\n");
	freeList(l);
}