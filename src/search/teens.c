/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teens.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:05:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 23:16:36 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*search_teens(char *dict, char tens, char ones)
{
	char	s[2];

	s[0] = tens;
	s[1] = ones;
	s[2] = '\0';
	return (search(dict, s));
}
