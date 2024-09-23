/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddFrontTest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:43:19 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 16:54:52 by splattje         ###   ########.fr       */
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
	if (l->next == NULL)
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

	ft_printf("test3: ");
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	if (l->content == (void *)2)
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
	if (((t_list *)l->next)->content == (void*)1)
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
	if (((t_list *)l->next)->next == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO " RESET);
	freeList(l);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}