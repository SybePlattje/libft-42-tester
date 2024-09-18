/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstaddFrontTest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:43:19 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 11:03:16 by splattje         ###   ########.fr       */
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
	printf("test1: ");
	ft_lstadd_front(&l ,ft_lstnew((void *)1));
	if (l->content == (void *)1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	if (l->next == NULL)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	if (l->content == (void *)2)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test4: ");
	if (((t_list *)l->next)->content == (void*)1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test5: ");
	if (((t_list *)l->next)->next == 0)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO \n" RESET);
	freeList(l);
}