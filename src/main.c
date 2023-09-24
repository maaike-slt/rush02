/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylenoel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:37:47 by ylenoel           #+#    #+#             */
/*   Updated: 2023/09/24 15:38:10 by ylenoel          ###   ########.fr       */
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
	ft_putchar('\n');
	convert(dict, nb);
	ft_putchar('\n');
	free(dict);
	return (0);
}
