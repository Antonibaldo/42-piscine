/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:36:37 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/29 18:14:20 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
       	unsigned long   num;
        int                             i;

        i = 0;
        num = 0;
        while (str[i] != '\0')
        {
                if (str[i] < '0' || str[i] > '9')
                {
                        write(1, "Error\n", 6);
                        return (0);
                }
                num = num * 10 + (str[i] - '0');
                i++;
        }
        return (num);

}

int	ft_iterative_factorial(char *nb)
{
	int	i;
	int	j;
	int	nbi;
	
	nbi = ft_atoi(nb);
	i = 1;
	j = 1;
	while (i <= nbi)
	{
		
		j = ft_iterative_factorial(j * i);
		i++;
	}
	return (j);
}

int main(int argc, char **argv)
{
	int	a;
	a = ft_iterative_factorial(argv[argc - 1]);
	printf("%d", a);
}
