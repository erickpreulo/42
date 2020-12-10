/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:11:19 by ande-sou          #+#    #+#             */
/*   Updated: 2020/12/08 13:31:52 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	check_is_prime(long int nb, long int i)
{
	if (nb % i == 0 || nb % 2 == 0)
		return (0);
	if (i * i > nb)
		return (1);
	return (check_is_prime(nb, i + 2));
}

long int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	return (check_is_prime(nb, 3));
}

int			ft_find_next_prime(int nb)
{
	unsigned long int next;

	next = nb;
	while (!ft_is_prime(next))
		next++;
	return (next);
}
