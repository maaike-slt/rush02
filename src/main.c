/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:37:47 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:36:22 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	*dict;
	char	*nb;
	int		fd;

	if (!parse(argc, argv, &nb, &fd))
		return (1);
	dict = read_file(fd);
	close(fd);
	if (!dict)
		return (1);
	if (!convert(dict, nb, 0))
	{
		free(dict);
		return (ft_put_dict_error(1));
	}
	convert(dict, nb, 1);
	free(dict);
	return (0);
}
