/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 16:20:09 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	convert(char *dict, char *nb)
{
	size_t	i;

	i = 0;
	while (nb[i] != 0)
	{
		if(ft_strlen(&nb[i]) % 3 == 0)
		{
			ft_putstr_until_whitespace(search_ones(dict, nb[i]));
			ft_putstr_until_whitespace(search_big(dict, 3));
		}
		if(nb[i] <= 9)
		{
			ft_putstr_until_whitespace(search_ones(dict, nb[i]));
		}
		i++;
	}
}
