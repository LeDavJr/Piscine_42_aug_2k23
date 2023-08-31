/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:23:27 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 20:23:28 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str >> 4) & 0x0F]);
			ft_putchar("0123456789abcdef"[*str & 0x0F]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
/*
int main() {
    char input[] = "\n \v \f \r";
    ft_putstr_non_printable(input);
    return 0;
}*/
