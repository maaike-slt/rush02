/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:43:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 23:47:43 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

#include <stdio.h>

size_t	ft_nblen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && ft_is_num(str[i]))
		i++;
	return (i);
}

// skip [numbers][whitespaces]:[whitespaces]
char	*word(char *dict)
{
	size_t	i;

	i = 0;
	while (ft_is_num(dict[i]))
		i++;
	while (ft_is_whitespace(dict[i]))
		i++;
	i++;
	while (ft_is_whitespace(dict[i]))
		i++;
	return (&dict[i]);
}

char	*search(char *dict, char *nb)
{
	size_t	nb_size;
	size_t	found_size;
	size_t	i;

	nb_size = ft_nblen(nb);
	i = 0;
	while (dict[i] != '\0')
	{
		found_size = ft_nblen(&dict[i]);
		if (nb_size == found_size && ft_strncmp(&dict[i], nb, nb_size) == 0)
			return (word(&dict[i]));
		while (dict[i] != '\0' && dict[i] != '\n')
			i++;
		if (dict[i] == '\n')
			i++;
	}
	return (NULL);
}
