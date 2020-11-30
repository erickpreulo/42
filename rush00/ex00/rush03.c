/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:48:21 by jmatos            #+#    #+#             */
/*   Updated: 2020/11/28 17:50:07 by jmatos           ###   ########.fr       */
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
			if (col == 1 && (lin == 1 || lin == y))
				ft_putchar('A');
			else if (col == x && (lin == y || lin == 1))
				ft_putchar('C');
			else if (((col == 1 || col == x) && lin > 1) ||
					((lin == 1 || lin == y) && col > 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
