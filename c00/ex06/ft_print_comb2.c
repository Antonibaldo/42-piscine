/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:59:21 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/09 12:42:58 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			write(1, &((char){a / 10 + '0'}), 1);
			write(1, &((char){a % 10 + '0'}), 1);
			write(1, " ", 1);
			write(1, &((char){b / 10 + '0'}), 1);
			write(1, &((char){b % 10 + '0'}), 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	man(void)
{
	ft_print_comb2();
	return(0);
}
*/
