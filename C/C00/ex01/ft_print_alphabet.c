/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:15:47 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/10 10:44:07 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a ++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
