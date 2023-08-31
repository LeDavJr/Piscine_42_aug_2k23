/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:12:13 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 14:12:15 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 32 && *str <= 126)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
    char chaine1[] = "\n";
    char chaine2[] = "123";
    char chaine3[] = "Aa12";
    char chaine4[] = "";

    printf("Chaine 1 : %d\n", ft_str_is_printable(chaine1));
    printf("Chaine 2 : %d\n", ft_str_is_printable(chaine2));
    printf("Chaine 3 : %d\n", ft_str_is_printable(chaine3));
    printf("Chaine 4 : %d\n", ft_str_is_printable(chaine4));

    return 0;
}*/
