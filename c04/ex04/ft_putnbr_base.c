/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:04:17 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/29 12:30:32 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	if (!ft_check_base(base))
		return ;
	base_len = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}
/*
int	main(void)
{
	int nbr = 17862;
	char base[] = {"poniguay"};

	ft_putnbr_base(nbr, base);
}
*/
