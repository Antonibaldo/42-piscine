/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:27:56 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/28 09:37:02 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_size(dest);
	s = ft_size(src);
	if (d >= size)
		return (size + s);
	while ((src[i] != '\0') && ((i + d + 1) < size))
	{
		dest[i + d] = src[i];
		i++;
	}
	dest[i + d] = '\0';
	return (s + d);
}
/*
int main(void)
{
        char str2[]="mundo";
        char str1[]= "hola";
	unsigned int i;
        i = ft_strlcat(str1, str2, 6);
        printf("%c",'\n');
	printf("%d",i);
	return (0);
}*/
