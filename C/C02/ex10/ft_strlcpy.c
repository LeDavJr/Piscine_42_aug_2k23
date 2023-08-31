/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:03:11 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 20:03:12 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_long;
	int	free_size;

	src_long = 0;
	while (src[src_long] != '\0')
		src_long++;
	if (size > 0)
	{
		free_size = size - 1;
		while (*src != '\0' && free_size > 0)
		{
			*dest = *src;
			dest++;
			src++;
			free_size--;
		}
		*dest = '\0';
	}
	return (src_long);
}

/*int main() 
{
	char src[] = "Le monde chico";
	char dest[15];
  	unsigned int cpy_lenght;
  	cpy_lenght = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source : %s\n", dest);
	printf("Longueur de la source: %u\n", cpy_lenght);
	return 0;
}*/
