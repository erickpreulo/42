/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:39:13 by egomes            #+#    #+#             */
/*   Updated: 2020/12/09 19:39:06 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*mal;

	size = 0;
	while (src[size] != '\0')
		size++;
	if (!(mal = malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		mal[i] = src[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}
