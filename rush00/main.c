/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:27:23 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/11 17:43:33 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 8;
	if (x <= 0 || y <= 0)
		write(1, "ERROR", 5);
	else
		rush(x, y);
	return (0);
}
