/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:53:42 by jmatos            #+#    #+#             */
/*   Updated: 2020/11/28 17:54:30 by jmatos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int lin;
	int col;

	if (x > 2550 || x < 0)
		return ;
	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((lin == 1 && col == 1) ||
					(lin == y && col == x && lin > 1 && col > 1))
				ft_putchar('A');
			else if ((lin == 1 && col == x) || (lin == y && col == 1))
				ft_putchar('C');
			else if (lin == 1 || lin == y || col == 1 || col == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
