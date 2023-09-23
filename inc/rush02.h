/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:57:11 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 21:38:59 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int			parse(int argc, char *argv[], char **nb, int *fd);

long long	ft_atoll(char *str);

void		ft_putstr(char *str);
void		ft_putchar(char c);

int			ft_put_error(int ret);
int			ft_put_dict_error(int ret);

size_t		ft_strlen(char *str);

char		*ft_strcpy(char *dest, char *src);
char		*ft_strcat(char *dest, char *src);

char		*ft_strjoin(char *s1, char *s2);
char		*ft_strjoin_free(char *s1, char *s2, int free_s1, int free_s2);

#endif
