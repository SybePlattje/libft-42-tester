/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlastTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:33 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:53:18 by splattje         ###   ########.fr       */
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
	if (ft_lstlast(l) == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test2: ");
	ft_lstadd_back(&l, ft_lstnew((void *)1));
	if (ft_lstlast(l)->content == (void *)1)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	if (ft_lstlast(l)->content == (void *)2)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test4: ");
	if (ft_lstlast(l)->next == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	freeList(l);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}