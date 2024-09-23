/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddBackTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:37 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:41:29 by splattje         ###   ########.fr       */
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
	if (l->content == (void *)1)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test2: ");
	if (l->next == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	if (l->content == (void *)1)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	
	ft_printf("test4: ");
	if (((t_list *)(l->next))->content == (void *)2)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test5: ");
	if (((t_list *)(l->next))->next == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test6: ");
	ft_lstadd_back(&l2, ft_lstnew((void *)3));
	ft_lstadd_back(&l2, ft_lstnew((void *)4));
	ft_lstadd_back(&l, l2);
	if (l->content == (void *)1)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test7: ");
	if (((t_list *)(l->next))->content == (void *)2)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test8: ");
	if (((t_list *)(((t_list *)(l->next))->next))->content == (void*)3)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);
	
	ft_printf("test9: ");
	if (((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->content == (void*)4)
	{
		ft_printf(GREEN "OK " RESET);
		int sizeCheck = checkSize(l, sizeof(t_list));
		if (sizeCheck == 1)
			ft_printf(GREEN "SOK " RESET);
		else if (sizeCheck == 2)
			ft_printf(RED "SKO " RESET);
		else
			ft_printf(RED "NKO " RESET);
	}
	else
		ft_printf(RED "KO " RESET);

	ft_printf("test10: ");
	if (((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->next == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	freeList(l);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}