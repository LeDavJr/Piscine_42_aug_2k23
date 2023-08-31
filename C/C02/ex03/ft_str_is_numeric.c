/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:24:20 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 11:24:22 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!((*str >= '0') && (*str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
    char chaine1[] = "1";
    char chaine2[] = "A1";
    char chaine3[] = "abc";
    char chaine4[] = "";

    printf("Chaine 1 : %d\n", ft_str_is_numeric(chaine1));
    printf("Chaine 2 : %d\n", ft_str_is_numeric(chaine2));
    printf("Chaine 3 : %d\n", ft_str_is_numeric(chaine3));
    printf("Chaine 4 : %d\n", ft_str_is_numeric(chaine4));

    return 0;
}*/
