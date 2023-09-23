/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:46 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/23 23:41:16 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/*
long long max:
170141183460469231731687303715884105727
undecillion:
1000000000000000000000000000000000000
*/

long long	ft_atoll(char *str)
{
	long long		nb;
	unsigned int	minus;

	nb = 0;
	minus = 0;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	if (minus % 2 == 1)
		return (-nb);
	else
		return (nb);
}
