/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:50:13 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/24 17:50:24 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*source;
	unsigned char	temp[50];
	size_t	i;

	desti = (unsigned char*)dest;
	source = (unsigned char*)src;

	i = 0;
	while (source[i] != '\0')
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		desti[i] = temp[i];
		i++;
	}

/*	if (desti > srce)
	{
		desti += n;
		srce += n;
		while (n > 0)
		{
			*(--desti) = *(--srcei);
			n--;
		}
	else
		ft_memcpy(desti, srcei, n);
	}*/
	return (desti);
}
