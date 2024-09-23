/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaldo-m <abaldo-m@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:50:25 by abaldo-m          #+#    #+#             */
/*   Updated: 2024/08/25 22:05:43 by abaldo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sdlib.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void	load_dict()
{
	int	fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	fd = open(numbers.dict, O_RDONLY);
	bytes_read = read (fd, buffer, sizeof(buffer) - 1);
	// Programa del buffer
	
	close(fb);

}	
