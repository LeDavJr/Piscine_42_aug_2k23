/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:11:04 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/28 20:11:05 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_comb(int comb[], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = comb[i] + '0';
		write (1, &c, 1);
		i++;
	}
}

void	generate_comb(int comb[], int pos, int n, int cur_dig)
{
	int	i;

	if (pos == n)
	{
		print_comb(comb, n);
		if (comb[0] < 10 - n)
			write (1, ", ", 2);
		return ;
	}
	i = cur_dig;
	while (i <= 9)
	{
		comb[pos] = i;
		generate_comb(comb, pos + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	generate_comb(comb, 0, n, 0);
}

// int	main(void)
// {
// 	ft_print_combn(8);
// 	return (0);
// }
