/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:17:08 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/15 13:17:10 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

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

/*int main() {
    char str1[60] = "Les mains faites pour l'or, ";
    char str2[] = "mais elles sont dans la merde...";
    
    printf("Chaine 1 : %s\n", str1);
    printf("Chaine 2 : %s\n", str2);
    ft_strcat(str1, str2);
    
    printf("-> %s\n", str1);
    
    return 0;
}*/
