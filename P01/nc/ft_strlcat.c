/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:53:07 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/28 14:53:11 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//char	*ft_strncat(char *dest, char *src, unsigned int nb)
char	*ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	id;
	unsigned int	is;

	id = ft_strlen(dst);
/*	while (dest[id] != '\0')
	{
		id++;
	}*/
	is = 0;
	while (src[is] != '\0' && is < size)
	{
		dst[id] = src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destin[] = "Learning ";
	char	source[] = "to fly";
	
	printf ("\ndestin    : %s\n", destin);
	printf ("source    : %s\n\n", source);
	printf ("ft_strcat : %s\n\n", ft_strlcat(destin, source));
	
	char	destin2[] = "Learning ";
	printf (" strcat   : %s\n\n", strcat(destin2, source));
}*/
