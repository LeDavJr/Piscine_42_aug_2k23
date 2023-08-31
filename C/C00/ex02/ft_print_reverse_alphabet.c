/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:22:49 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/10 11:22:56 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
