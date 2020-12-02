/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:42:59 by egomes            #+#    #+#             */
/*   Updated: 2020/12/01 19:57:57 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	minuscula(char *m)
{
	while (m[0] != '\0')
	{
		if (m[0] >= 'A' && m[0] <= 'Z')
		{
			m[0] += 32;
		}
		m++;
	}
}

void	primeira_maiuscula(char *p)
{
	while (p[0] != '\0')
	{
		if (!((p[-1] >= 'A' && p[-1] <= 'Z') ||
				(p[-1] >= 'a' && p[-1] <= 'z') ||
				(p[-1] >= '0' && p[-1] <= '9')))
		{
			if (p[0] >= 'a' && p[0] <= 'z')
				p[0] -= 32;
		}
		p++;
	}
}

char	*ft_str_is_printable(char *str)
{
	minuscula(str);
	primeira_maiuscula(str);
	return (str);
}
