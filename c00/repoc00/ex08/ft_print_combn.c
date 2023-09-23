/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavon-v <opavon-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:08:53 by opavon-v          #+#    #+#             */
/*   Updated: 2023/07/20 10:17:13 by opavon-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *tab, int n)
{
	int	a;
	bool	low;

	a = 1;
	low = 1;
	while (a < n)
	{
		if (tab[a - 1] >= tab[a])
			low = 0;
		a++;
	}
	if (low)
	{
		a = 0;
		while (a < n)
			ft_putchar(tab[a++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	tab[n];

	a = 0;
	while (a < n)
		tab[a++] = 0;
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(tab, n);
		tab[n - 1]++;
		a = n - 1;
		while (a && n > 1)
		{
			if (tab[a] > 9)
			{
				tab[a - 1]++;
				tab[a] = 0;
			}
			a--;
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
}
