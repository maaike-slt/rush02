/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:19:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 23:55:04 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	*dict;
	char	*nb;
	int		fd;

	if (!parse(argc, argv, &nb, &fd))
		return (1);
	dict = read_file(fd);
	if (!dict)
		return (1);
	ft_putstr("number to convert:\t");
	ft_putstr(nb);
	ft_putstr("\n\ndictionary:\n");
	ft_putstr(dict);
	ft_putstr("\n\nI want 12:\t");
	ft_putstr_to_whitespace(search_teens(dict, '1', '2'));
	ft_putstr("\n\nI want 1000:\t");
	ft_putstr_to_whitespace(search_big(dict, 4));
	ft_putstr("\n\nI want 1000000000000000000000000000000000000:\t");
	ft_putstr_to_whitespace(search_big(dict, 37));
	ft_putchar('\n');
	free(dict);
	return (0);
}
