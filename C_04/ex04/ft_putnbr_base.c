/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:35:38 by egomes            #+#    #+#             */
/*   Updated: 2020/12/07 21:37:53 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		base_is_invalid(char *base)
{
	int i;
	int	m;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		m = i + 1;
		while (base[m])
			if (base[m++] == base[i])
				return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned	int	holder;
	unsigned	int	base_length;

	if (base_is_invalid(base))
		return ;
	base_length = ft_strlen(base);
	holder = nbr;
	if (nbr < 0)
	{
		write(1, "-", 1);
		holder = -nbr;
	}
	if (holder >= base_length)
	{
		ft_putnbr_base(holder / base_length, base);
		ft_putnbr_base(holder % base_length, base);
	}
	else
		write(1, &base[holder], 1);
}
