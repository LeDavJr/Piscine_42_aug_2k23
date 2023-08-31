/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:08:00 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/10 19:08:03 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	c;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			c = num1 / 10 + '0';
			ft_putchar(c);
			c = num1 % 10 + '0';
			ft_putchar(c);
			ft_putchar(' ');
			c = num2 / 10 + '0';
			ft_putchar(c);
			c = num2 % 10 + '0';
			ft_putchar(c);
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
