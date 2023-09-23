/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:19:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/23 22:26:06 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	char	*unparsed_file;
	char	*nb;
	int		fd;

	if (!parse(argc, argv, &nb, &fd))
		return (1);
	unparsed_file = read_file(fd);
	if (!unparsed_file)
		return (1);
	ft_putstr("number to convert:\t");
	ft_putstr(nb);
	ft_putstr("\n\ndictionary:\n");
	ft_putstr(unparsed_file);
	free(unparsed_file);
	return (0);
}
