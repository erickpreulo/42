/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:52:47 by egomes            #+#    #+#             */
/*   Updated: 2020/12/07 16:25:05 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			tab[15];
	int				i;
	unsigned	int	holder;

	i = 0;
	holder = nb;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		holder = -nb;
	}
	while (holder > 0)
	{
		tab[i] = (holder % 10 + '0');
		holder /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(tab[i]);
}
