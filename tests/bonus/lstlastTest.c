/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlastTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:33 by splattje          #+#    #+#             */
/*   Updated: 2024/09/30 11:20:45 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void lstlastTest()
{
	t_list *l = NULL;
	ft_printf("test1: ");
	check(ft_lstlast(l) == 0);

	ft_printf("test2: ");
	ft_lstadd_back(&l, ft_lstnew((void *)1));
	check(ft_lstlast(l)->content == (void *)1);

	ft_printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	check(ft_lstlast(l)->content == (void *)2);

	ft_printf("test4: ");
	check(ft_lstlast(l)->next == 0);
	freeList(l);
	checkMemory();
	write(1, "\n", 1);
}