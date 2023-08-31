/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:54:55 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/20 15:54:58 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cpt;

	cpt = 0;
	while (src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
// int main() 
// {
//     char source[] = "All eyes on me";
//     char *duplicate = ft_strdup(source);

//     if (duplicate != NULL) {
//         printf("Source: %s\n", source);
//         printf("Duplicate: %s\n", duplicate);

//         free(duplicate);
//     } else {
//         printf("Allocation memoire echouee.\n");
//     }

//     return 0;
// }