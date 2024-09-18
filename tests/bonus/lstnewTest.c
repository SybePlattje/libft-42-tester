/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnewTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:43 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 10:54:27 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstnewTest()
{
	t_list *l = ft_lstnew((void *)42);
	printf("test1: ");
	if (l->content == (void *)42)
		printf(GREEN "KO " RESET);
	else
		printf(RED "KO " RESET);

	printf("test2: ");
	if (l->next == 0)
		printf(GREEN "KO\n" RESET);
	else
		printf(RED "KO\n" RESET);
	free(l);
}