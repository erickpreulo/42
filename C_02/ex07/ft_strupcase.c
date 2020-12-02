/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:41:06 by egomes            #+#    #+#             */
/*   Updated: 2020/12/01 16:32:22 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		str++;
	}
	return (str);
}
