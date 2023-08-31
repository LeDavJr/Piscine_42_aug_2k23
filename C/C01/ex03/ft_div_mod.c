/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 08:45:24 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/12 08:45:25 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a = 5;
	int	b = 2;
	int	quotient, reste;

	ft_div_mod(a, b, &quotient, &reste);
	printf("Quotient : %d\n", quotient);
	printf("Reste : %d\n", reste);
	return 0;
}*/
