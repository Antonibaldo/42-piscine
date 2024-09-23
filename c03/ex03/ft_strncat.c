/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:38:34 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/28 09:53:45 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[]={"hola"};
	char src[]={"como"};
	int nb= 2;
	char *i;
	i = ft_strncat(dest, src, nb);
	printf("%s", i);
}
*/
