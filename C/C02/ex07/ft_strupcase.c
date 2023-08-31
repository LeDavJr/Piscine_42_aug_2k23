/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:54:27 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 14:54:29 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*maj;

	maj = str;
	while (*maj != '\0')
	{
		if (*maj >= 'a' && *maj <= 'z')
		{
			*maj = *maj - ('a' - 'A');
		}
		maj++;
	}
	return (str);
}

/*int main() 
{
    char str[] = "en temps reel";
    printf("Avant : %s\n", str);
    
    ft_strupcase(str);
    
    printf("Après : %s\n", str);

    return 0;
}*/
