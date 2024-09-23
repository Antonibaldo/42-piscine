/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:07:56 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/21 13:16:03 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			r = s1[i] - s2[i];
			return (r);
		}
	}
	return (0);
}
/*
int main(void)
{
	char	s1[]= "hol";
	char	s2[]= "hol";
	int i;
	i = ft_strcmp(s1, s2);
	printf("%i", i);
	return(0);
}
*/
