/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundreds.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:48:26 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	convert_hundreds(char *dict, char c, int *print)
{
	char	*word;

	if (c == '0')
		return (1);
	word = search_ones(dict, c);
	if (!word)
		return (0);
	if (*print)
	{
		ft_putstr_until_whitespace(word);
		ft_putchar(' ');
		*print += 1;
	}
	word = search_big(dict, 3);
	if (!word)
		return (0);
	if (*print)
		ft_putstr_until_whitespace(word);
	return (1);
}
