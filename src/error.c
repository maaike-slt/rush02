/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:45:02 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 11:48:08 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02"

int	ft_put_error(int ret)
{
	ft_putstr("Error\n");
	return (ret);
}

int	ft_put_dict_error(int ret)
{
	ft_putstr("Dict error\n");
	return (ret);
}
