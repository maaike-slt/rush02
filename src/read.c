/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:57:15 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/23 21:21:07 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)*argv;
	if(argc > 0)
	{
		int fd;

		fd = open("numbers.dict", O_RDONLY); // Open file in read-only mode
		printf("%d", fd);
		if(fd == -1)  // Security check, if opening failed return 1
			return (1);

		// Read now
		char buffer[100];
		ssize_t byte_read; // 2 variables needed to use read
		byte_read = read(fd, buffer, sizeof(buffer));
		// Read takes the opened file, a buffer, and sizeof number of bytes 
		// you want to read from the file

		// 2nd security check error or EOF
		if (byte_read == -1)
		{
			close(fd);
			return (1);
		}
		else if (byte_read == 0)
		{
			close(fd);
			// EOF reached
			return (0);		
		}
		int i;

		i = 0;
		while(i <= 30)
		{
		write(1, &buffer[i], 1);
		i++;
		}
	}
}
