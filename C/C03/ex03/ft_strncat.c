/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:45:32 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/15 13:45:33 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*i_dest;

	i_dest = dest;
	while (*i_dest)
		i_dest++;
	while (*src && (nb > 0))
	{
		*i_dest = *src;
		i_dest++;
		src++;
		nb--;
	}
	*i_dest = '\0';
	return (dest);
}

/*int main()
{
    char dest[100] = "Le monde, ";
    char src[] = "chico";

    printf("avant concatenation chaine 1: %s\n", dest);
    printf("avant concatenation chaine 2 : %s\n", src);
    ft_strncat(dest, src, 5);
    printf("apres concatenation: %s\n", dest);

    return 0;
}*/
