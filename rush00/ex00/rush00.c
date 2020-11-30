/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:06:20 by jmatos            #+#    #+#             */
/*   Updated: 2020/11/28 17:42:40 by jmatos           ###   ########.fr       */
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
			if ((lin == 1 && (col == 1 || col == x)) ||
					(lin == y && (col == x || col == 1)))
				ft_putchar('o');
			else if ((lin == 1 || lin == y) && col > 1)
				ft_putchar('-');
			else if ((col == 1 || col == x) && lin > 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
