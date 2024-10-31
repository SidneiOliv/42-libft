/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:07 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 18:59:59 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	id;
	size_t	is;
	size_t	newlen;

	id = ft_strlen(dst);
	newlen = id + ft_strlen(src);
	is = 0;
	if (size <= id)
		return (size + ft_strlen(src));
	while (src[is] != '\0' && is < size)
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (newlen);
}
