/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:02:55 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 14:02:56 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
    char chaine1[] = "AZ";
    char chaine2[] = "123";
    char chaine3[] = "Aa12";
    char chaine4[] = "";

    printf("Chaine 1 : %d\n", ft_str_is_uppercase(chaine1));
    printf("Chaine 2 : %d\n", ft_str_is_uppercase(chaine2));
    printf("Chaine 3 : %d\n", ft_str_is_uppercase(chaine3));
    printf("Chaine 4 : %d\n", ft_str_is_uppercase(chaine4));

    return 0;
}*/
