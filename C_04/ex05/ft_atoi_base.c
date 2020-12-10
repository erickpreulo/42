/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:06:42 by egomes            #+#    #+#             */
/*   Updated: 2020/12/07 16:27:32 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
		|| base[i] == '\t' || base[i] == '\r' || base[i] == '\v'
		|| base[i] == '\n' || base[i] == '\f')
			return (1);
		j = i + 1;
		while (base[j])
			if (base[j++] == base[i])
				return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int		ft_find_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				neg;
	int				result;
	unsigned	int	base_length;

	neg = 1;
	i = 0;
	result = 0;
	base_length = ft_strlen(base);
	if (base_is_invalid(base))
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
	str[i] == '\v' || str[i] == '\n' || str[i] == '\f')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_find_is_base(str[i], base) != -1)
		result = (result * base_length) + ft_find_is_base(str[i++], base);
	return (result * neg);
}
