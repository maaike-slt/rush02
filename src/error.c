/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:45:02 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 21:54:56 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_put_error(int ret)
{
	ft_putstr_error("Error\n");
	return (ret);
}

int	ft_put_dict_error(int ret)
{
	ft_putstr_error("Dict Error\n");
	return (ret);
}
