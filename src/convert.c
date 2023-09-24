/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 18:31:30 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	convert(char *dict, char *nb)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (nb[i] != 0)
	{
		len = ft_strlen(&nb[i]);
		if (len % 3 == 0)
		{
			ft_putstr_until_whitespace(search_ones(dict, nb[i]));
			ft_putstr_until_whitespace(search_big(dict, 3));
		}
		else if (len % 3 == 2)
		{
			if (nb[i] == '1')
			{
				ft_putstr_until_whitespace(search_teens(dict, nb[i], nb[i + 1]));
				i++;
			}
			else if (nb[i] > '1')
			{
				ft_putstr_until_whitespace(search_tens(dict, nb[i]));
				i++;
				ft_putstr_until_whitespace(search_ones(dict, nb[i]));

			}
		}
		else
		{
			ft_putstr_until_whitespace(search_ones(dict, nb[i]));
			if (len > 1)
				ft_putstr_until_whitespace(search_big(dict, len));
		}
		i++;
	}
}
