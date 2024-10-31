/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr_strjoin.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 16:45:12 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_substr.c

#include "libft.h"

int	main(void)
{
//test ft_substr.c
    printf("\ntest ft_substr.c ....................\n");
	const char    str[] = "Learning to Fly";
    int start = 5;
    int len = 6;
    char    *subs;

    subs = ft_substr(str, start, len);
    printf("str  : %s\n", str);
    printf("subs : %s\n", subs);
    printf("str  : %s\n", str);

// test ft_strjoin.c
    printf("\ntest ft_strjoin.c ....................\n");

	char	destin[] = "Learning ";
	char	source[] = "to fly";
    char    *join;
	
	printf ("destin    : %s\n", destin);
	printf ("source    : %s\n", source);
	
	printf ("ft_strjoin: %s\n", ft_strjoin(destin, source));

    join = ft_strjoin(destin, source);
    printf ("join: %s\n", join);
    printf ("\ndestin    : %s\n", destin);
}
