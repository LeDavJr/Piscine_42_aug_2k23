/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:35:10 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/19 13:35:11 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*int main() {
    int input;
    printf("Entrez un nombre : ");
    scanf("%d", &input);
    if (ft_is_prime(input)) {
        printf("%d est deja premier.\n", input);
    } else {
        int next = ft_find_next_prime(input);
        printf("%d n'est pas premier. ", input);
        printf("Le prochain nombre premier est :%d.\n", next);
    }

    return 0;
}*/
