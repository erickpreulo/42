/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   desafioexame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:28:30 by egomes            #+#    #+#             */
/*   Updated: 2020/12/05 13:47:15 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	desafio(int d)
{
	char 	x;
	int		y;

	y = 0;
	x = 'Z';
	while (x >= 'A' && y < d)
	{
		if (x % 4 == 0)
			put_char('?');
		else if (x % 3 == 0)
		{
			put_char(x + 32);
		}
		else
		{
			put_char(x);
		}
		x--;
		y++;
	}
}

int main()
{
	desafio(4);
}