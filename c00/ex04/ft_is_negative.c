/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:54:51 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/10 16:54:53 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = 2;
	ft_is_negative(n);
	return (0);
}
*/
