/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:48 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/22 11:44:55 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_memset

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)

{
	char string[50] = "1234567890";
	printf("\nBefore ft_memset(): %s\n", string);

	ft_memset(string + 9, '.', 3);

	printf("After  ft_memset(): %s\n", string);


	char string1[50] = "1234567890";
	printf("\nBefore    memset(): %s\n", string1);

	memset(string1 + 9, '.', 3*sizeof(char));

	printf("After     memset(): %s\n", string1);
}
/*
{
	int string[50] = {1,2,3,4,5,6,7,8,9,0};
	printf("\nBefore ft_memset(): %d\n", string[4]);

	ft_memset(string + 2, 0, 5);

	printf("After  ft_memset(): %d\n", string[4]);


	int string1[50] = {1,2,3,4,5,6,7,8,9,0};
	printf("\nBefore    memset(): %d\n", string1[4]);

	memset(string1 + 2, 0, 5*sizeof(char));

	printf("After     memset(): %d\n", string1[4]);
}
*/
