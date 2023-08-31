/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:20:59 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/12 14:21:01 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	debut;
	int	fin;
	int	n;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		n = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = n;
		debut++;
		fin--;
	}
}

/*int main() {
    int tableau[] = {123};
    int size = sizeof(tableau) / sizeof(tableau[0]);

    printf("Avant inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    ft_rev_int_tab(tableau, size);

    printf("Après inversion : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}*/
