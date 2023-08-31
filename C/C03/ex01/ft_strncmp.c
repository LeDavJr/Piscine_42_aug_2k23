/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:21:18 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/15 11:21:19 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		if (*s1 == '\0')
			return (*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*int main() {

    char chaine1[] = "a";
    char chaine2[] = "ab";

    printf("Premiere chaine : %s\n", chaine1);
    printf("Deuxieme chaine : %s\n", chaine2);

    int resultat = ft_strncmp(chaine1, chaine2, 3);
if (resultat == 0) 
	printf("Les chaines sont identiques.\n");
else if (resultat < 0) 
	printf("La premiere chaine est inferieure.\n");
else 
	printf("La premiere chaine est superieur.\n");
 return 0;
}*/
