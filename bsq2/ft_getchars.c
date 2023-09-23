/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavon-v <opavon-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:00:23 by opavon-v          #+#    #+#             */
/*   Updated: 2023/07/26 13:14:58 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"

char	ft_getchar(char *argv, int a)
{
	int		i;
	char	*buf;
	int		fd;
	char	c;

	i = 0;
	fd = open(argv, O_RDONLY);
	buf = malloc(80 * sizeof(char));
	if (buf == NULL)
		return (0);
	while (read(fd, &buf[i], 1))
	{
		if (buf[i] == '\n')
			break ;
		i++;
	}
	c = buf[i - a];
	free (buf);
	close(fd);
	return (c);
}

char	ft_get_char_void(char *argv)
{
	char	v;

	v = ft_getchar(argv, 3);
	return (v);
}

char	ft_get_char_obst(char *argv)
{
	char	o;

	o = ft_getchar(argv, 2);
	return (o);
}

char	ft_get_char_full(char *argv)
{
	char	p;

	p = ft_getchar(argv, 1);
	return (p);
}
