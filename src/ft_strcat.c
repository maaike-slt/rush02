/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:28:23 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/23 13:44:34 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[dest_len + i] = '\0';
	return (dest);
}
