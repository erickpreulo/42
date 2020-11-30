/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:28:20 by egomes            #+#    #+#             */
/*   Updated: 2020/11/28 18:10:16 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	primeiro;
	int	segundo;
	int	terceiro;

	primeiro = '0' - 1;
	while (++primeiro <= '9')
	{
		segundo = primeiro;
		while (++segundo <= '9')
		{
			terceiro = segundo;
			while (++terceiro <= '9')
			{
				ft_putchar(primeiro);
				ft_putchar(segundo);
				ft_putchar(terceiro);
				if (primeiro != '7' || segundo != '8' || terceiro != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
