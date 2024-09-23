/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnewTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:43 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 17:03:04 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstnewTest()
{
	t_list *l = ft_lstnew((void *)42);
	ft_printf("test1: ");
	if (l->content == (void *)42)
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
	free(l);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}