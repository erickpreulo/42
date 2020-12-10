/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:55:40 by egomes            #+#    #+#             */
/*   Updated: 2020/12/04 13:44:39 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	test(void)
{
	int p;
	int s;
	int t;
	int r;

	p = 0;
	s = 1;
	t = 2;
	r = (p + s + t);
	while (p && s && t <= 789)
	{
		p = r / 10 + r % 10;
		ft_putchar(p);
		r++;
	}
}

int main()
{
	test();
}