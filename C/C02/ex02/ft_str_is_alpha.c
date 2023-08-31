/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:36:00 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 10:36:03 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z' )))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
    char chaine1[] = "AaZz";
    char chaine2[] = "123";
    char chaine3[] = "Aa12";
    char chaine4[] = "";

    printf("Chaine 1 : %d\n", ft_str_is_alpha(chaine1));
    printf("Chaine 2 : %d\n", ft_str_is_alpha(chaine2));
    printf("Chaine 3 : %d\n", ft_str_is_alpha(chaine3));
    printf("Chaine 4 : %d\n", ft_str_is_alpha(chaine4));

    return 0;
}*/
