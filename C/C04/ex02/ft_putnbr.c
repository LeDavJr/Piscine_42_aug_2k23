/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:24:19 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/16 15:24:22 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recursive(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_recursive(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
		ft_putnbr_recursive(nb);
}

/*int main()
{
	int nombre1 = -2147483648;
	int nombre2 = 0;
	int nombre3 = 2147483647;

	ft_putnbr(nombre1);
	printf("\n");
	ft_putnbr(nombre2);
	printf("\n");
	ft_putnbr(nombre3);
	printf("\n");
	return 0;
}*/
