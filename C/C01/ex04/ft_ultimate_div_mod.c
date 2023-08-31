/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 10:59:31 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/12 10:59:33 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n;

	n = *a;
	*a = n / *b;
	*b = n % *b;
}

/*int	main() 
{
	int	a = 42;
	int	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("Quotient : %d\n", a);
	printf("Reste : %d\n", b);
	return 0;
}*/
