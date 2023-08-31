/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:37:04 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/17 14:37:05 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fact = nb - 1;
	while (fact != 0)
	{
		nb = nb * fact;
		fact--;
	}
	return (nb);
}

// int main()
// {
//     int num = 100;
//     int result = ft_iterative_factorial(num);

//     printf("Le factoriel de %d est: %d\n", num, result);

//     return 0;
// }