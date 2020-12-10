/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:07:29 by egomes            #+#    #+#             */
/*   Updated: 2020/12/08 11:44:12 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int		ft_iterative_power(int nb, int power)
{
	int r;
	int i;

	if (power < 0)
		return (0);
	r = 1;
	i = 1;
	while (i <= power)
	{
		r = nb * r;
		i++;
	}
	return (r);
}
