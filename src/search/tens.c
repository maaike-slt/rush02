/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tens.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:31:48 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 14:39:13 by ylenoel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*search_tens(char *dict, char tens)
{
	char	s[2];

	s[0] = tens;
	s[1] = '0';
	s[2] = '\0';
	return (search(dict, s));
}
