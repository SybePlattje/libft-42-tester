/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsizeTest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:49:07 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:54:38 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

static void freeList(t_list *head)
{
	if (head)
		freeList((t_list *)head->next);
	free(head);
}

void lstsizeTest()
{
	t_list *l = NULL;
	printf("test1: ");
	if (ft_lstsize(l) == 0)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);
	
	printf("test2: ");
	ft_lstadd_front(&l, ft_lstnew((void *)1));
	if (ft_lstsize(l) == 1)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test3: ");
	ft_lstadd_front(&l, ft_lstnew((void *)2));
	if (ft_lstsize(l) == 2)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
	freeList(l);
}