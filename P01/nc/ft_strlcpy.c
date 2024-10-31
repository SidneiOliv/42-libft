/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:37:17 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/25 19:40:57 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlcpy(char *dst, const char *src, size_t size)
//char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

int	main(void)
{
	char dest[] = "123456789";
	char src[] = "abcdefghij";

	printf("\n");
	printf ("before, dest: %s\n", dest);

	printf ("function,   %s\n", ft_strlcpy(dest, src, 5));

	printf ("after,  dest: %s\n", dest);
	printf("\n");

	
	char dest1[] = "123456789";
	printf ("before,dest1: %s\n", dest1);
	
	strlcpy(dest1, src, 5);

	printf ("after, dest1: %s\n", dest1);
	printf("\n");
}
