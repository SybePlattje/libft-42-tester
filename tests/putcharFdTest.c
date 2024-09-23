/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcharFdTest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: splattje <splattje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:13:41 by splattje          #+#    #+#             */
/*   Updated: 2024/09/23 12:17:03 by splattje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftTester.h"

void putcharFdTest()
{
	int fd = open("tests/utils/testChar.txt", O_CREAT | O_APPEND |  O_RDWR , 0666);
	if (fd == -1)
	{
		ft_printf(RED "Error opening testfile\n" RESET);
		return;
	}
	ft_printf("test1: ");
	ft_putchar_fd('c', fd);
	char out = 0;
	lseek(fd, 0, SEEK_SET); // Reset the file pointer to the start of the file
	int bytesRead = read(fd, &out,  9);
	if (bytesRead != 1)
		ft_printf(RED "KO incorrect bytes has been read\n" RESET);
	else if (out == 'c')
		ft_printf(GREEN "OK " RESET);
	else 
		ft_printf(RED "KO " RESET);
	close(fd);
	if (remove("tests/utils/testChar.txt") != 0)
		ft_printf(RED "Failed to remove testChar.txt in tests/utils/\n Remove manualy before running tester again\n" RESET);
	if (g_total_allocated_memory == 72704) // 72704 is already allocated before we start
		ft_printf(GREEN "MOK\n" RESET);
	else
		ft_printf(RED "MKO\n" RESET);
}
