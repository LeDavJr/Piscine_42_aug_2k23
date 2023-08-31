/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:53:31 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/22 11:53:34 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

// int main() {
//     int min = 0;
//     int max = 10000 + 1;

//     int *result = ft_range(min, max);

//     if (result == NULL) {
//     } else {
//         for (int i = 0; i < max - min; i++) {
//             printf("%d ", result[i]);
//         }
//         free(result);
//     }

//     return 0;
// }