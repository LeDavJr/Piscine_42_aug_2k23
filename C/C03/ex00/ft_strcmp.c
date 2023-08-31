/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:39:56 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/15 09:39:57 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}

/*int main() {
    char chaine1[] = "Bonjoura";
    char chaine2[] = "Bonjour";

    printf("Premiere chaine : %s\n", chaine1);
    printf("Deuxieme chaine : %s\n", chaine2);

    int resultat = strcmp(chaine1, chaine2);
    if (resultat == 0) 
        printf("Les chaines sont identiques.\n");
     else if (resultat < 0) 
        printf("La premiere chaine est inferieure.\n");
     else 
        printf("La premiere chaine est superieur.\n");
    

    return 0;
}*/
