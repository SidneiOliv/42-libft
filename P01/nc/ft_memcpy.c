/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:53:36 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/24 15:55:48 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *desti;
	char *srce;
	unsigned int	i;
	desti = (char*)dest;
	srce = (char*)src;

	i = 0;
	while (srce[i] != '\0' && i < n)
	{
		desti[i] = srce[i];
		i++;
	}
/*	while (i < n)
	{
		desti[i] = '\0';
		i++;
	}*/
	return (desti);
}
/*
int	main(void)
{
	char dest[] = "123456789";
	//char src[] = "Porto";

	printf("\n");
//	printf ("before, dest: %s\n", dest);

	ft_memcpy(dest + 3, dest, 4 * sizeof(char));
	
	printf ("after,  dest: %s\n", dest);


	char dest1[] = "123456789";
//	printf ("\nbefore,dest1: %s\n", dest1);
	
	memcpy(dest1 + 3, dest1, 4 * sizeof(char));

	printf ("after, dest1: %s\n", dest1);
//	printf("\n");


	char dest3[] = "123456789";
	memmove(dest3 + 3, dest3, 4 * sizeof(char));
	printf("dest3 memmove:%s\n\n", dest3);
}*/
