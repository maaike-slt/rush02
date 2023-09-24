/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ones.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:05:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 14:33:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*search_ones(char *dict, char ones)
{
	char	s[2];

	s[0] = ones;
	s[1] = '\0';
	return (search(dict, s));
}
