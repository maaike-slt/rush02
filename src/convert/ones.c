/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ones.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:44:30 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	convert_ones(char *dict, char c, size_t len, int *print)
{
	char	*word;

	if (c != '0')
	{
		word = search_ones(dict, c);
		if (!word)
			return (0);
		if (*print)
		{
			*print += 1;
			ft_putstr_until_whitespace(word);
		}
	}
	if (len == 1)
		return (1);
	word = search_big(dict, len);
	if (!word)
		return (0);
	if (*print > 1)
	{
		ft_putchar(' ');
		ft_putstr_until_whitespace(word);
		*print = 1;
	}
	return (1);
}
