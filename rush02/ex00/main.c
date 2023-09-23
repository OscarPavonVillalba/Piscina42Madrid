/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:57:19 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/07/23 23:14:29 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0' && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			num *= 10;
		i++;
	}
	return (num);
}

struct	s_Dictionary
{
	char	key;
	char	value;
};

int	main(int argc, char **argv)
{
	int		r;
	int		size;
	int		i;
	int		h;
	int		z;
	int		b;
	int		num;
	char	key[200];
	char	value[200];
	char	buffer[8000];

	//struct Dictionary *d1 = malloc(sizeof(d1));

	num = 30;
	r = open("numbers.dict", O_RDONLY);
	if (r == -1)
	{
		write (1, "error", 1);
		return (0);
	}
	size = read(r, buffer, 8000);
	i = 0;
	h = 0;
	z = 0;
	while (buffer[i] != '\0')
	{
		while (buffer[i] >= '0' && buffer[i] <= '9')
		{
			if (key[h] == ' ')
				h++;
			key[h] = buffer[i];
			h++;
			i++;
		}
		key[h] = ' ';
		i++;
	}
	key[h] = '\0';

	//printf("%s", key);
	//printf("%s", value);
	return (0);
}
