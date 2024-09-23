/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putendlFdTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:58:31 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 12:17:33 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void putendlFdTest()
{
	char *test;
	test = calloc(sizeof(char), 10);
	if (test == NULL)
	{
		ft_printf(RED "Malloc in test putendlFdTest failed\n" RESET);
		return;
	}
	int fd = open("tests/utils/testLineEnd.txt", O_CREAT | O_APPEND |  O_RDWR , 0666);
	
	if (fd == -1)
	{
		ft_printf(RED "Error opening testfile\n" RESET);
		free(test);
		return;
	}
	ft_printf("test1: ");
	ft_putendl_fd(NULL, fd);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	int bytesRead = read(fd, test, 9);
	if (bytesRead != 0)
		ft_printf(RED "KO " RESET);
	else
		ft_printf(GREEN "OK " RESET);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK " RESET);
	else
		ft_printf(RED "MKO " RESET);
	
	ft_printf("test2: ");
	ft_putendl_fd("Hello", fd);
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	bytesRead = read(fd, test, 9);
	if (bytesRead != 6)
		ft_printf(RED "KO " RESET);
	else if (strncmp(test, "Hello", 5) == 0 && test[5] == '\n')
		ft_printf(GREEN "OK " RESET);
	else
		ft_printf(RED "KO, Not the right string printed\n" RESET);
	close(fd);
	if (remove("tests/utils/testLineEnd.txt") != 0)
		ft_printf(RED "Failed to remove testLineEnd.txt in tests/utils/\n Remove manualy before running tester again\n" RESET);
	free(test);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}