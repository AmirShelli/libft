/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:48:09 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/23 22:07:48 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' \
		|| c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str && (ft_isspace(*str)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if (ft_isdigit(*str))
		{
			num = num * 10 + (*str - 48);
		}
		str++;
	}
	return (sign * num);
}
