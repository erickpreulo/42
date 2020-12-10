/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:24:17 by egomes            #+#    #+#             */
/*   Updated: 2020/12/10 10:11:37 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	if (!(range[0] = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}

int main(int argc, char **argv)
{
	int *array;
	int min = -5;
	int	max = 10;
	int tamanho;
	int i;

	(void)argc;
	printf("%c\n", argv[2][1]);

	tamanho = ft_ultimate_range(&array, min, max);

	while (i < tamanho)
	{
		printf("%d ", array[i]);
		i++;
	}
}
