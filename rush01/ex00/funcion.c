/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:44:30 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/18 20:20:52 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define MAX_SIZE 4

int	fill_towers(int towers[MAX_SIZE][MAX_SIZE], int views[], int r, int c)
int	comp_towers()

void	print_towers(int towers[MAX_SIZE][MAX_SIZE])
{
    int r;
    int c;

    r = 0;
    while (r < MAX_SIZE) {
        c = 0;
        while (c < MAX_SIZE) {
            printf("%d ", towers[r][c]);
            c++;
        }
        printf("\n");
        r++;
    }
}

void	convert_views(const char *input, int views[])
{
    int i;

    i = 0;
    while (i < 16)
    {
	    views[i] = input[i * 2] - '0';
	    i++;
    }
}
