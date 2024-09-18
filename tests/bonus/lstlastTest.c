/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlastTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:47:33 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:35:43 by splattje         ###   ########.fr       */
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
	printf("test1: ");
	if (ft_lstlast(l) == 0)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	ft_lstadd_back(&l, ft_lstnew((void *)1));
	if (ft_lstlast(l)->content == (void *)1)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	ft_lstadd_back(&l, ft_lstnew((void *)2));
	if (ft_lstlast(l)->content == (void *)2)
		printf(GREEN "OK " RESET);
	else
		printf(RED "KO " RESET);

	printf("test4: ");
	if (ft_lstlast(l)->next == 0)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	freeList(l);
}