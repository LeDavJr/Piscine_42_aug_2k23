/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ko.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:50:48 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/14 16:50:49 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	alphabetic(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char	*maj;
	char	nm;

	maj = str;
	nm = 1;
	while (*maj != '\0')
	{
		if (alphabetic(*maj))
		{
			if (nm)
			{
				if (*maj >= 'a' && *maj <= 'z')
					*maj = *maj - ('a' - 'A');
				nm = 0;
			}
			else
				if (*maj >= 'A' && *maj <= 'Z')
					*maj = *maj + ('a' - 'A');
		}
		else
			nm = 1;
		maj++;
	}
	return (str);
}

/*int main() {
    char str[] = "caRRe lA 42LEaGuE.";

    printf("Avant : %s\n", str);
    
    ft_strcapitalize(str);
    
    printf("Après : %s\n", str);

    return 0;
}*/
