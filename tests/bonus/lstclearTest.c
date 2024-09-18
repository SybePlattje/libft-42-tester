/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclearTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:44:01 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:52:53 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstclearTest()
{
	t_list *l = ft_lstnew(malloc(1));
	for (int i = 0; i < 10; ++i)
		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
	ft_lstclear(&l, free);
	printf("test1: ");
	if (l == NULL)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
}