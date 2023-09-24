/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:11:47 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	convert_inner(char *dict, char *nb, size_t *i, int check)
{
	size_t	len;

	if (nb[*i] == '0')
		return (1);
	len = ft_strlen(&nb[*i]);
	if (len % 3 == 0)
	{
		if (!convert_hundreds(dict, nb[*i], check))
			return (0);
	}
	else if (len % 3 == 2)
	{
		if (!convert_tens(dict, nb, i, check))
			return (0);
	}
	else
	{
		if (!convert_ones(dict, nb[*i], len, check))
			return (0);
	}
	return (1);
}

int	convert(char *dict, char *nb, int check)
{
	size_t	i;

	if (ft_strlen(nb) == 1 && nb[0] == '0')
		return (convert_ones(dict, '0', 1, check));
	i = 0;
	while (nb[i] != '\0')
	{
		if (!convert_inner(dict, nb, &i, check))
			return (0);
		i++;
	}
	ft_putchar('\n');
	return (1);
}
