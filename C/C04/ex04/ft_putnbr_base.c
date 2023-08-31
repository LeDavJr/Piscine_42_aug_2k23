/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:41:39 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/16 19:41:44 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	base_valide(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	digit;

	if (!(base_valide(base)))
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	digit = base[nbr % base_len];
	write(1, &digit, 1);
}

/*int	main(void)
{
	ft_putnbr_base(, "01");
	return (0);
}*/
