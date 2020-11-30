/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:56:53 by egomes            #+#    #+#             */
/*   Updated: 2020/11/30 17:43:21 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		re;
	int		swap;

	i = 0;
	re = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[re];
		tab[re] = swap;
		i++;
		re--;
	}
}
