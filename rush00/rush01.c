/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:08:56 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/11 17:15:03 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(x, y)
{
	int	f;
	int	c;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((f == 1 && c == 1) || (f == y && c == x))
				ft_putchar('/');
			else if ((f == 1 && c == x) || (f == y && c == 1))
				ft_putchar('\\');
			else if ((f == 1 || f == y) || (c == 1 || c == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
