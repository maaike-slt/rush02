/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:19:28 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 22:20:47 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strdup(char *src)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!ret)
		return (NULL);
	ft_strcpy(ret, src);
	return (ret);
}
