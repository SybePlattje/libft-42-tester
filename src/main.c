/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:14:15 by splattje          #+#    #+#             */
/*   Updated: 2024/09/12 16:27:36 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

int main(void)
{
	atoiTest();
	bzeroTest();
	callocTest();
	isalnumTest();
	isalphaTest();
	isasciiTest();
	isdigitTest();
	isprintTest();
	itoaTest();
	memchrTest();
	memcmpTest();
	memcpyTest();
	memmoveTest();
	memsetTest();
	putcharFdTest();
	putnbrFdTest();
	putstrFdTest();
	splitTest();
	strchrTest();
	strdubTest();
	striteriTest();
	strjoinTest();
	strlcatTest();
	strlcpyTest();
	strlenTest();
	strmapiTest();
	strncmpTest();
	strnstrTest();
	strrchrTest();
	strtrimTest();
	substrTest();
	tolowerTest();
	toupperTest();
	
	if (BONUS)
	{
		lstaddBackTest();
		lstaddFrontTest();
		lstclearTest();
		lstdeloneTest();
		lstiterTest();
		lstlastTste();
		lstmapTest();
		lstnewTest();
		lstsizeTest();
	}
	return 1;
}
