/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:21:00 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 22:16:02 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	parse_nb(char *nb)
{
	size_t	i;

	if (ft_strlen(nb) == 0)
		return (0);
	i = 0;
	while (nb[i] != '\0')
	{
		if (!ft_is_num(nb[i]))
			return (0);
		i++;
	}
	return (1);
}

int	parse(int argc, char *argv[], char **nb, int *fd)
{
	if (argc != 2 && argc != 3)
		return (ft_put_error(0));
	if (!parse_nb(argv[argc - 1]))
		return (ft_put_error(0));
	if (argc == 2)
	{
		*nb = argv[1];
		*fd = open("numbers.dict", O_RDONLY);
	}
	else
	{
		*nb = argv[2];
		*fd = open(argv[1], O_RDONLY);
	}
	if (*fd < 0)
		return (ft_put_dict_error(0));
	return (1);
}
