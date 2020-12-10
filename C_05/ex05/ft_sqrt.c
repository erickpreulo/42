/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 08:40:15 by egomes            #+#    #+#             */
/*   Updated: 2020/12/08 11:54:27 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int r;

	r = nb / 2;
	if (nb < 0)
		return (0);
	while ((r * r) > nb)
		r /= 2;
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		else if (r * r > nb)
			return (0);
		r++;
	}
	return (0);
}
