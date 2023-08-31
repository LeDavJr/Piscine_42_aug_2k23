/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:44:59 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/17 17:45:00 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/*int main()
{
    int num = 1;
    int power = 0;
    int result = ft_iterative_power(num, power);

    printf("%d puissance %d = %d\n ", num, power, result);

    return 0;
}*/
