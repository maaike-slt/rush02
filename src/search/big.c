/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:05:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 22:47:59 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

// 1000000000000000000000000000000000000 is 37 length
char	*search_big(char *dict, size_t len)
{
	char	*s;
	char	*ret;
	size_t	i;

	if (len == 0)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[0] = '1';
	i = 1;
	while (i < len)
	{
		s[i] = '0';
		i++;
	}
	s[i] = '\0';
	ret = search(dict, s);
	free(s);
	return (ret);
}
