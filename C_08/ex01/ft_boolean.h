/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:10:37 by egomes            #+#    #+#             */
/*   Updated: 2020/12/10 15:25:37 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H__

#define __FT_BOOLEAN_H__

#include <unistd.h>
#define SUCCESS	0

#define FALSE	0
#define TRUE	1

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

typedef  int t_bool;

# define EVEN(var) (var % 2)

#endif