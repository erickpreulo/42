/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 08:56:53 by egomes            #+#    #+#             */
/*   Updated: 2020/12/08 11:58:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < (nb / 2))
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}