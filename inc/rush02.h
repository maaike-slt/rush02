/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:57:11 by msloot            #+#    #+#             */
/*   Updated: 2023/09/24 21:02:52 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE	4096

int			parse(int argc, char *argv[], char **nb, int *fd);

char		*read_file(int fd);

char		*search(char *dict, char *nb);
char		*search_ones(char *dict, char ones);
char		*search_teens(char *dict, char tens, char ones);
char		*search_tens(char *dict, char tens);
char		*search_big(char *dict, size_t len);

int			convert(char *dict, char *nb, int check);
int			convert_ones(char *dict, char c, size_t len, int check);
int			convert_tens(char *dict, char *nb, size_t *i, int check);
int			convert_hundreds(char *dict, char c, int check);

long long	ft_atoll(char *str);

void		ft_putstr(char *str);
void		ft_putstr_error(char *str);
void		ft_putstr_until_whitespace(char *str);
void		ft_putchar(char c);

int			ft_put_error(int ret);
int			ft_put_dict_error(int ret);

int			ft_is_num(char c);
int			ft_is_whitespace(char c);

size_t		ft_strlen(char *str);
size_t		ft_strlen_until_whitespace(char *str);

char		*ft_strcpy(char *dest, char *src);
char		*ft_strcat(char *dest, char *src);
int			ft_strncmp(char *s1, char *s2, unsigned int n);

char		*ft_strdup(char *src);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strjoin_free(char *s1, char *s2, int free_s1, int free_s2);

#endif
