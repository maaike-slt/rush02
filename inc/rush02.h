/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:57:11 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 13:33:46 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>

size_t	ft_strlen(char *str);

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		ft_put_error(int ret);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin_free(char *s1, char *s2, bool free_s1, bool free_s2);

#endif
