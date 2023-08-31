/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:27:54 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/22 13:27:58 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*i_dest;

	i_dest = dest;
	while (*i_dest != '\0')
		i_dest++;
	while (*src != '\0')
	{
		*i_dest = *src;
		i_dest++;
		src++;
	}
	*i_dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_lenght(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = total_lenght(size, strs, sep);
	result = malloc(total_len);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// int main() 
// {
// 		char *strs[] = {"a", "b", "c"};
// 		char *sep = ", ";
// 		int size = sizeof(strs) / sizeof(strs[0]);

// 		char *result = ft_strjoin(size, strs, sep);
// 		if (result) {
// 			printf("Chaine apres concatenation : %s\n", result);
// 			free(result);
// 		} else {
// 			printf("Probleme de memoire allouee.\n");
// 		}

// 		return 0;
// }