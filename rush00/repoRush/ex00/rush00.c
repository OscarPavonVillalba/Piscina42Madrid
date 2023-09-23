/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdiaz-gu <fdiaz-gu@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:22:21 by fdiaz-gu          #+#    #+#             */
/*   Updated: 2023/07/09 11:22:23 by fdiaz-gu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 1;
	while (r <= y && x > 0)
	{
		c = 1;
		while (c <= x)
		{
			if ((c != 1 && c != x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r != 1 && r != y) && (c == 1 || c == x))
				ft_putchar('|');
			else if ((c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
