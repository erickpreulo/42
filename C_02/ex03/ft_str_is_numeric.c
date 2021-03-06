/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:00:43 by egomes            #+#    #+#             */
/*   Updated: 2020/12/02 08:14:06 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= '0' && str[0] <= '9'))
			return (0);
		str++;
	}
	return (1);
}
