/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:21:30 by bharghaz          #+#    #+#             */
/*   Updated: 2021/02/25 23:21:32 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*aux;

	aux = malloc(ft_strlen(src) + 1);
	copy = aux;
	if (!aux || !src)
		return (NULL);
	while (*src)
		*aux++ = *src++;
	*aux = '\0';
	return (copy);
}
