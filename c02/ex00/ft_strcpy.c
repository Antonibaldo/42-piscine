/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:19:45 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/19 13:33:08 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char str2[]= "ola";
	char str1[3];

	char *a = str1;
	char *b = str2;
	int i = 0;
	ft_strcpy(a, b);
	while (str1[i] != '\0')
	{
		printf("%c", str1[i]);
		i++;
	}
	return (0);
}
*/
