/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdupTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 09:40:41 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
void strdupTest()
{
	ft_printf("test1: ");
	char *test = "hello";
	char *output = ft_strdup(test);
	if (output == NULL)
		ft_printf(RED "KO " RESET);
	else if (output == test)
	{
		ft_printf(RED "KO " RESET);
		free (output);
	}
	else
	{
		ft_printf(GREEN "OK " RESET);
		checkSize(output, sizeof(char) * 6);
		free (output);
	}
	checkMemory();

	ft_printf("test2: ");
	char *test2 = "";
	output = ft_strdup(test2);
	if (output == NULL)
		ft_printf(RED "KO " RESET);
	else if (output == test2)
	{
		ft_printf(RED "KO " RESET);
		free (output);
	}
	else
	{
		ft_printf(GREEN "OK " RESET);
		checkSize(output, sizeof(char) * 1);
		
		free (output);
	}
	checkMemory();
	write(1, "\n", 1);
}
