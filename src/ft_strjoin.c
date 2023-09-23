/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:21:42 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 13:28:01 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	ft_strcpy(joined, s1);
	ft_strcat(joined, s2);
}

char	*ft_strjoin_free(char *s1, char *s2, bool free_s1, bool free_s2)
{
	char	*joined;

	joined = ft_strjoin(s1, s2);
	if (free_s1)
		free(s1);
	if (free_s2)
		free(s2);
	return (joined);
}
