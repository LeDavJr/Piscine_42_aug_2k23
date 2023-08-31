/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:58:01 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 13:58:02 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z' )))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int main() 
{
    char chaine1[] = "Test";
    char chaine2[] = "123Test";
    char chaine3[] = "test";
    char chaine4[] = "";

    printf("Chaine 1 : %d\n", ft_str_is_lowercase(chaine1));
    printf("Chaine 2 : %d\n", ft_str_is_lowercase(chaine2));
    printf("Chaine 3 : %d\n", ft_str_is_lowercase(chaine3));
    printf("Chaine 4 : %d\n", ft_str_is_lowercase(chaine4));

    return 0;
}*/
