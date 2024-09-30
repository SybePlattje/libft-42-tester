/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstrFdTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:38:54 by splattje          #+#    #+#             */
/*   Updated: 2024/09/24 08:51:53 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void putstrFdTest()
{
	char *test;
	test = calloc(sizeof(char), 5);
	if (test == NULL)
	{
		ft_printf(RED "Malloc it test putstrFdTest failed\n" RESET);
		return;
	}
	int fd = open("tests/utils/testString.txt", O_CREAT | O_APPEND |  O_RDWR , 0666);
	
	if (fd == -1)
	{
		ft_printf(RED "Error opening testfile\n" RESET);
		free(test);
		return;
	}
	ft_printf("test1: ");
	ft_putstr_fd(NULL, fd);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	int bytesRead = read(fd, test, 1);
	if (bytesRead != 0)
		ft_printf(RED "KO " RESET);
	else
		ft_printf(GREEN "OK " RESET);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	checkMemory();
	
	ft_printf("test2: ");
	ft_putstr_fd("Hello", fd);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	bytesRead = read(fd, test, 5);
	if (bytesRead != 5)
		ft_printf(RED "KO " RESET);
	else if (strncmp(test, "Hello", 5) == 0)
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO, Not the right string printed " RESET);
	close(fd);
	if (remove("tests/utils/testString.txt") != 0)
		ft_printf(RED "Failed to remove testTring.txt in tests/utils/\n Remove manualy before running tester again\n" RESET);
	free(test);
	checkMemory();
	write(1, "\n", 1);
}