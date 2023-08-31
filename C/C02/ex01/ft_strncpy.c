/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:30:01 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 09:30:02 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}

/*int main() {
    char src[] = "le monde ";
    char dest[20];

    ft_strncpy(dest, src, 10);
    printf("Source : %s\n", src);
    printf("destination: %s\n", dest);

    return 0;
}*/
