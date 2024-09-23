/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:35:47 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/12 18:10:03 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	e;

	i = 0;
	f = size - 1;
	while (i <= f)
	{
		e = tab[i];
		tab[i] = tab[f];
		tab[f] = e;
		f--;
		i++;
	}
}
/*
int	main(void)
{
	int tab[]= {0, 1, 2, 3};
	int i = 0;	
	ft_rev_int_tab(tab, 4);	
	while (i < 4)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
