/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main32_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 19:08:17 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlcat

#include "libft.h"
#include <bsd/string.h>
//cc -lbsd main32_strlcat.c ft_strlcpy.c ft_strlcat.c ft_strlen.c

int	main(void)
{

// test strlcpy
	printf("\ntest ft_strlcpy.c ....................\n");
	char dest[] = "123456789";
	char src[] = "abcdefghij";
	printf ("before, dest: %s\n", dest);
	printf ("before, src : %s\n", src);
	printf ("   return     : %zu\n", ft_strlcpy(dest, src, 10));
	printf ("   after, dest: %s\n\n", dest);
	char dest1[] = "123456789";
	printf ("before,dest1: %s\n", dest1);
	printf (" strlcpy  : %zu\n\n", strlcpy(dest1, src, 10));
	printf ("after, dest1: %s\n", dest1);

//	test strlcat
	printf("\ntest ft_strlcat.c ....................\n");
	char	destin[] = "Learning ";
	char	source[] = "to fly";
	int	num = 9;
	printf ("destin  : %s\n", destin);
	printf ("source  : %s\n", source);
	printf ("num     : %d\n", num);
	printf ("   return  : %zu\n", ft_strlcat(destin, source, num));
	printf ("   destin  : %s\n\n", destin);
	char	destin2[] = "Learning ";
	printf (" strlcat  : %zu\n\n", strlcat(destin2, source, num));

}
