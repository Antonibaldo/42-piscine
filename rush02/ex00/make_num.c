/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:19:56 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/25 20:17:12 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void make_num(unsigned long *num)
{
	int	size;

	size = 0;
	while (num[size] =! '\0')
	{
		size++;
	}
	str_cont = ft_rev(num, size);
	
	while(str_cont[i] != '\0')
	{
		if (i % 3 == 0)
		{
			if (i <= 0) 
			{
				//buscar el numero en el diccionario
				//imprimirlo
			}
			else 

				//buscar el numero en el diccionario
				//imprimir el numero
				//imprimir la unidad con 10 x i(pos)
		}
		if else (i % 3 == 1)
		{
			if(str_cont[i] <= 1)
			{
				//busca el numero entero de 
				//str_cont[i] y su -1 
				//immprime su nombre
			}
			else  
				//multiplicar el valor * 10
                        	//buscr el valor en el diccionario
		}
		if (i % 3 == 2)
		{
			//buscar el numero en el diccionario
                        //imprimir el numero
                        //imprimir la unidad con 100 x i(pos)
		}

	}

}

void	ft_rev(unsigned long *num, int size)
{
 	int     i;
        int     f;
        int     e;

        i = 0;
        f = size - 1;
        while (i <= f)
        {
                e = num[i];
                num[i] = num[f];
                num[f] = e;
                f--;
                i++;
        }
	return (num);
}
