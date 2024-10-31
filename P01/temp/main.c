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

// ft_isalpha

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	string1[] = "TESTING";
	char	string2[] = "testing";
	char	string3[] = "TESTing";
	char	string4[] = "testing@";
	char	string5[] = "testing[";
	char	string6[] = "testing%";
	char	string7[] = "";
	int	alpha;
	
	printf ("\n");
	alpha = ft_isalpha(string1);
	printf ("%s, alpha is = %d\n", string1, alpha);
	alpha = ft_isalpha(string2);
	printf ("%s, alpha is = %d\n", string2, alpha);
	alpha = ft_isalpha(string3);
	printf ("%s, alpha is = %d\n", string3, alpha);
	alpha = ft_isalpha(string4);
	printf ("%s, alpha is = %d\n", string4, alpha);
	alpha = ft_isalpha(string5);
	printf ("%s, alpha is = %d\n", string5, alpha);
	alpha = ft_isalpha(string6);
	printf ("%s, alpha is = %d\n", string6, alpha);
	alpha = ft_isalpha(string7);
	printf ("%s, alpha is = %d\n", string7, alpha);
	printf ("\n");
}
