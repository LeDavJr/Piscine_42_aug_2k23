/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:17:25 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 15:17:27 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*maj;

	maj = str;
	while (*maj != '\0')
	{
		if (*maj >= 'A' && *maj <= 'Z')
		{
			*maj = *maj - ('A' - 'a');
		}
		maj++;
	}
	return (str);
}

/*int main() 
{
    char str[] = "QLNT";
    printf("Avant : %s\n", str);
    
    ft_strlowcase(str);
    
    printf("Après : %s\n", str);

    return 0;
}*/
