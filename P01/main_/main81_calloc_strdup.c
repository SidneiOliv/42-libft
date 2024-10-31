/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc_strdup.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/30 20:10:30 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_calloc.c

#include "libft.h"

int	main(void)
{
//test ft_calloc.c
    printf("\ntest ft_calloc.c\n");
	int *pt;
    int num;
    int size;

    num = 4;
    size = 4;
    pt = ft_calloc(num, size);

    int i;
    i = 0;
    while (i < num)
    {
        printf("pt[%d] : %d\n", i, pt[i]);
        i++;
    }

// test ft_strdup.c
    printf("\ntest ft_strdup.c\n");
    char    str1[] = "Porto";
    char    *ptr;
    
    ptr = ft_strdup(str1);
    
    int i2;
    i2 = 0;
    while (i2 < 5)
    {
        printf("ptr[%d] : %c\n", i2, ptr[i2]);
        i2++;
    }
}
