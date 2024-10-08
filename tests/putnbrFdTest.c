/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrFdTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:27:49 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 08:50:57 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void putnbrFdTest()
{
	char *test;
	test = calloc(sizeof(char), 5);
	if (test == NULL)
	{
		ft_printf(RED "Malloc it test putnbrFdTest failed\n" RESET);
		return;
	}
	int fd = open("tests/utils/testNumber.txt", O_CREAT | O_APPEND |  O_RDWR , 0666);
	
	if (fd == -1)
	{
		ft_printf(RED "Error opening testfile\n" RESET);
		free(test);
		return;
	}
	ft_printf("test1: ");
	ft_putnbr_fd(1256, fd);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	int bytesRead = read(fd, test, 4);
	if (bytesRead != 4)
		ft_printf(RED "KO\n" RESET);
	else if (strncmp(test, "1256", 4) == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO, Not the right number printed " RESET);
	close(fd);
	if (remove("tests/utils/testNumber.txt") != 0)
		ft_printf(RED "Failed to remove testNumber.txt in tests/utils/\n Remove manualy before running tester again " RESET);
	free(test);
	checkMemory();
	write(1, "\n", 1);
}
