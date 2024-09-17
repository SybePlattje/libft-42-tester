/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdupTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/17 09:45:23 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"
void strdupTest()
{
	printf("test1: ");
	char *test = "hello";
	char *output = ft_strdup(test);
	if (output == NULL)
		printf(RED "KO " RESET);
	else if (output == test)
		printf(RED "KO " RESET);
	else
		printf(GREEN "OK " RESET);
	free (output);

	printf("test2: ");
	char *test2 = "";
	output = ft_strdup(test2);
	if (output == NULL)
		printf(RED "KO\n" RESET);
	else if (output == test2)
		printf(RED "KO\n" RESET);
	else
		printf(GREEN "OK\n" RESET);
	free(output);
}
