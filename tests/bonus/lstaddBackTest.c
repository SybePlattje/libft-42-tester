/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddBackTest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:37 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:07:25 by splattje         ###   ########.fr       */
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
	printf("test1: ");
	ft_lstadd_back(&l, ft_lstnew((void *)1));
	if (l->content == (void *)1)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	if (l->next == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	if (l->content == (void *)1)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test4: ");
	if (((t_list *)(l->next))->content == (void *)2)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test5: ");
	if (((t_list *)(l->next))->next == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test6: ");
	ft_lstadd_back(&l2, ft_lstnew((void *)3));
	ft_lstadd_back(&l2, ft_lstnew((void *)4));
	ft_lstadd_back(&l, l2);
	if (l->content == (void *)1)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test7: ");
	if (((t_list *)(l->next))->content == (void *)2)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test8: ");
	if (((t_list *)(((t_list *)(l->next))->next))->content == (void*)3)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test9: ");
	if (((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->content == (void*)4)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test10: ");
	if (((t_list *)((t_list *)(((t_list *)(l->next))->next))->next)->next == 0)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
	freeList(l);
}