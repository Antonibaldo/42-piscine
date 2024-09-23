/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 12:46:27 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/12 16:01:57 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int y=4;
	int x=6;

	ft_ultimate_div_mod(&x, &y);
	return (0);
}
*/
