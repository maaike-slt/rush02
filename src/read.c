/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:57:15 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/23 22:18:25 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*malloc_buffer(void)
{
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
	{
		ft_put_error(0);
		return (NULL);
	}
	return (buffer);
}

char	*read_error(char *buffer)
{
	free(buffer);
	ft_put_error(0);
	return (NULL);
}

char	*read_file(int fd)
{
	char	*ret;
	char	*buffer;
	ssize_t	read_ret;

	buffer = malloc_buffer();
	if (!buffer)
		return (NULL);
	read_ret = read(fd, buffer, BUFFER_SIZE);
	ret = ft_strdup(buffer);
	if (!ret)
		return (read_error(buffer));
	read_ret = read(fd, buffer, BUFFER_SIZE);
	while (read_ret > 0)
	{
		ret = ft_strjoin_free(ret, buffer, 1, 0);
		if (!ret)
			return (read_error(buffer));
		read_ret = read(fd, buffer, BUFFER_SIZE);
	}
	if (read_ret < 0)
	{
		free(ret);
		return (read_error(buffer));
	}
	return (ret);
}
