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

// ft_memmove

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	main(void)
{
	char string[50] = "1234567890";
	char string8[20] = "abcdefghij";
	printf("\nBefore ft_memmove: %s\n", string);

	ft_memmove(string + 3, string8, 3 * sizeof(char));

	printf("After  ft_memmove: %s\n", string);


	char string1[50] = "1234567890";
	printf("\nBefore    memmove: %s\n", string1);

	memmove(string1 + 3, string8, 3 * sizeof(char));

	printf("After     memmove: %s\n", string1);
}
