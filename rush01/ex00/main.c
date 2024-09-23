/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:41:20 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/18 20:16:38 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 4

void	convert_views(const char *input, int views[]);
void	print_towers(int towers[MAX_SIZE][MAX_SIZE]);
int		fill_towers(int towers[MAX_SIZE][MAX_SIZE], int views[], int r, int c);

int	main(int argc, char *argv[])
{
	int	towers[MAX_SIZE][MAX_SIZE];
	int	views[16];

	towers = {0};
	if (argc != 2)
		return (1);
	convert_views(argv[1], views);
	if (fill_towers(towers, views, 0, 0))
		print_towers(towers);
	else
		printf("Error\n");
	return (0);
}
