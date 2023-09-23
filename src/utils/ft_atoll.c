/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:12:46 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/23 21:14:54 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while ((*str >= 9 && *str <= 13) || *str == ' ')
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
