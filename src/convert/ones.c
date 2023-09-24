/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ones.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:03:59 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	convert_ones(char *dict, char c, size_t len, int check)
{
	char	*word;

	word = search_ones(dict, c);
	if (!word)
		return (0);
	if (!check)
		ft_putstr_until_whitespace(word);
	if (len == 1)
		return (1);
	word = search_big(dict, len);
	if (!word)
		return (0);
	if (!check)
		ft_putstr_until_whitespace(word);
	return (1);
}
