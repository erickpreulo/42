/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 07:58:59 by egomes            #+#    #+#             */
/*   Updated: 2020/12/10 10:32:08 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare(char *s1, char *s2)
{
	while (*s1++ == *s2++ && (*s1 != '\0') && (*s2 != '\0'))
		continue;
	return (*s1 - *s2);
}

void	ft_printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*buff;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (compare(argv[i], argv[j]) > 0)
			{
				buff = argv[i];
				argv[i] = argv[j];
				argv[j] = buff;
			}
			j++;
		}
		ft_printstr(argv[i]);
		i++;
	}
	return (0);
}
