/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opavon-v <opavon-v@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:05:59 by opavon-v          #+#    #+#             */
/*   Updated: 2023/07/09 17:27:59 by opavon-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}
