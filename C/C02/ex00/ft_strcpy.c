/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:56:08 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/12 17:56:10 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

/*int main() {
    char z[] = "okay okay";
    char x[20];

    ft_strcpy(x, z);

    printf("Source : %s\n", z);
    printf("Destination : %s\n", x);

    return (0);
}*/
