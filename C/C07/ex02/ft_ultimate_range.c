/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddebels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:52:55 by ddebels           #+#    #+#             */
/*   Updated: 2023/08/22 12:52:57 by ddebels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// int main() {
//     int *array;
//     int size = ft_ultimate_range(&array, 5, 10);

//     if (size == -1) {
//         printf("-1\n");
//     } else if (size == 0) {
//         printf("0\n");
//     } else {
//         printf("Valeurs entre Min(inclu) et Max(non inclu): ");
//         for (int i = 0; i < size; i++) {
//             printf("%d ", array[i]);
//         }
//         printf("\n");
//         free(array);
//     }

//     return 0;
// }