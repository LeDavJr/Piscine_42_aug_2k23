/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:59:13 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/16 10:59:15 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			temp = i;
			while (str[temp] == to_find[j])
			{
				if (!to_find[j + 1])
					return (&str[i]);
				j++;
				temp++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int main()
{
	const char s1[100] = "abgabghahdaihabauihabdabababaababaihaiufhiabcbjbg";
	const char s2[100] = "abc";
	
	char mys1[] = "abgabghahdaihabauihabdabababaababaihaiufhiabcbjbg";
 	char mys2[] = "abc";
 	
 	printf("my -%s- \n", ft_strstr(mys1, mys2));
 	printf("reel -%s- \n", strstr(s1, s2));
}*/
