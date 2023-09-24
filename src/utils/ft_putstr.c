/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:20:53 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 22:55:32 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putstr_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_putstr_trim(char *str)
{
	write(1, str, ft_strlen_trim(str));
}
