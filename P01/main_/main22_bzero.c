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

	ft_bzero(string + 3, 3);

	printf("After  ft_memset(): %s\n", string);


	char string1[50] = "1234567890";
	printf("\nBefore    memset(): %s\n", string1);

	bzero(string1 + 3, 3*sizeof(char));

	printf("After     memset(): %s\n", string1);
}
