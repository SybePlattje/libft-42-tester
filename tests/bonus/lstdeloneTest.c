/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdeloneTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:46:28 by splattje          #+#    #+#             */
/*   Updated: 2024/09/18 11:04:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libftTester.h"

void lstdeloneTest()
{
	printf("test1: ");
	t_list *l = ft_lstnew(malloc(1));
	ft_lstdelone(l, free);
	l = 0;
	if (l == NULL)
		printf(GREEN "OK\n" RESET);
	else
		printf(RED "KO\n" RESET);
	
}