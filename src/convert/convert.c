/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:03:01 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 22:26:56 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_end(char *nb)
{
	size_t	i;

	i = 0;
	while (nb[i] != '\0')
	{
		if (nb[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	convert_inner(char *dict, char *nb, size_t *i, int *print)
{
	size_t	len;

	len = ft_strlen(&nb[*i]);
	if (len % 3 == 0)
	{
		if (!convert_hundreds(dict, nb[*i], print))
			return (0);
	}
	else if (len % 3 == 2)
	{
		if (!convert_tens(dict, nb, i, print))
			return (0);
	}
	else
	{
		if (!convert_ones(dict, nb[*i], len, print))
			return (0);
	}
	if (*print && !is_end(&nb[*i + 1]) && nb[*i + 1] != '0')
		ft_putchar(' ');
	return (1);
}

size_t	skip_zero(char *nb)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(nb);
	while (i < len - 1 && nb[i] == '0')
		i++;
	return (i);
}

int	convert(char *dict, char *nb, int print)
{
	char	*word;
	size_t	i;

	i = skip_zero(nb);
	if (ft_strlen(&nb[i]) == 1 && nb[i] == '0')
	{
		word = search_ones(dict, '0');
		if (!word)
			return (0);
		if (print)
			ft_putstr_until_whitespace(word);
	}
	while (nb[i] != '\0')
	{
		if (!convert_inner(dict, nb, &i, &print))
			return (0);
		i++;
	}
	if (print)
		ft_putchar('\n');
	return (1);
}
