/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:26:06 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/28 09:19:07 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
        char    s1[]= "ABC";
        char    s2[]= "AB";
        unsigned int n = 3;
	int i;
        i = ft_strncmp(s1, s2, n);
        printf("%i", i);
        return(0);
}*/
