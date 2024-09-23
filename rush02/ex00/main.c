/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjofre-g <jjofre-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:02:32 by jjofre-g          #+#    #+#             */
/*   Updated: 2024/08/25 14:03:41 by jjofre-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void			case_1(char *str);
void			case_2(char *str, char *diccionary);
unsigned long	is_str_num_atoi(char *str);


int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (argc == 2)
		case_1(argv[1]);
	else if (argc == 3)
		case_2(argv[1], argv[2]);
	return (0);
}

void	case_1(char *str)
{
	unsigned long	num;

	num = is_str_num_atoi(str);
	if (num == 0)
		return ;
}

void	case_2(char *diccionary, char *str)
{
	unsigned long	num;
	(void)diccionary;
	num = is_str_num_atoi(str);
	if (num == 0)
		return ;
}

unsigned long	is_str_num_atoi(char *str)
{
	unsigned long	num;
	int				i;

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
