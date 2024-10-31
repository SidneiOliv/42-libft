/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:06:28 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/30 20:40:35 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	s = (const char *)str;
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
