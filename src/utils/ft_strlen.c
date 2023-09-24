/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:21:13 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 22:56:28 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	only_space_left(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if (!ft_is_whitespace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strlen_trim(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !only_space_left(&str[i]))
		i++;
	return (i);
}
