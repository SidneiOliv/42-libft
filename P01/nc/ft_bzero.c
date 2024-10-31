/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:42:20 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/24 13:42:22 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *str;
	size_t	i;
	str = (char*)s;

	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
