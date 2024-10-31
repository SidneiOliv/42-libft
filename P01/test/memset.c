/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:48:17 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/29 15:49:46 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "ABCD EFGH";

	printf("Before memset : %s\n", str);
	memset(str + 3, 'x' , 3);
	printf("After memset  : %s\n", str);
}

