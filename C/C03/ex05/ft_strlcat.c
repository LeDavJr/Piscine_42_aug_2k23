/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:44:39 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/16 12:44:40 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	free_size;
	unsigned int	i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	free_size = 0;
	i = 0;
	if (size <= dest_length)
		return (src_length + size);
	free_size = size - dest_length - 1;
	while (src[i] && free_size > 0)
	{
		dest[dest_length + i] = src[i];
		i++;
		free_size--;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// int main()
// {
//     char destination[50] = "Carre ";
//     char source[] = "La League.";
//     int result = ft_strlcat(destination, source, sizeof(destination));

//     printf("Concatenation : %s\n", destination);
//     printf("Array Len: %u\n", result);

//     return 0;
// }
