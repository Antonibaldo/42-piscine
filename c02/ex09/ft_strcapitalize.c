/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 10:39:20 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/28 10:32:52 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char str)
{
	if (!((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')
			|| (str >= '0' && str <= '9')))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] + 'A' - 'a';
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 'A' - 'a';
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char e[] = "salut, commMt tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *i;
	i = ft_strcapitalize(e);
	printf("%s", i);
	return (0);
}
*/
