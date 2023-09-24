/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tens.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 21:03:45 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	convert_teens(char *dict, char *nb, size_t *i, int check)
{
	char	*word;

	word = search_teens(dict, nb[*i], nb[*i + 1]);
	if (!word)
		return (0);
	if (!check)
		ft_putstr_until_whitespace(word);
	*i += 1;
	return (1);
}

int	convert_tens(char *dict, char *nb, size_t *i, int check)
{
	char	*word;

	if (nb[*i] == '1')
		return (convert_teens(dict, nb, i, check));
	word = search_tens(dict, nb[*i]);
	if (!word)
		return (0);
	if (!check)
		ft_putstr_until_whitespace(word);
	return (1);
}
