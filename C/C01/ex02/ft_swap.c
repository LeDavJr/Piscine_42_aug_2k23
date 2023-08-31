/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:27:24 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/11 20:27:26 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int main(void)
{
	int	a = 4;
	int	b = 7;

	ft_swap(&a, &b);

	char cx = a + '0';
	char cy = b + '0';

	write (1, &cx, 1);
	write(1, &cy, 1);
	return 0;
}*/
