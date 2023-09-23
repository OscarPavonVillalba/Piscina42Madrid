/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavon-v <opavon-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 07:50:15 by opavon-v          #+#    #+#             */
/*   Updated: 2023/07/09 12:15:47 by opavon-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char a)

void rush(int x, int y)
{
	int c;
	int r;
	r = 1;
	while (r <= y && x > 0)
	{
		
		c = 1;
		while ( <= x)
		{
			if ((c != 1 && c != x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r != 1 && r != y) && (== 1 || c == x))
				ft_putchar('|');
			else if (( c == 1) || (c == x) || (r == 1) || (r == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			c++;	
		}
		ft_putchar('\n');
		r++;
	}
}
