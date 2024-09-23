/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:50:10 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/28 11:08:34 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
        char str2[]="hola";
        char str1[]= "comohola";
        char *i;
        i = ft_strstr(str1, str2);
        printf("%s", i);
}
*/
