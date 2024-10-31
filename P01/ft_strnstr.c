/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:47:40 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/30 20:59:55 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (lit[0] == '\0')
		return (big);
	while (big[i1] != '\0' && lit[i2] != '\0' && i2 < len)
	{
		if (big[i1] == lit[i2])
		{
			i1++;
			i2++;
		}
		else
		{
			i1++;
			i2 = 0;
		}
	}
	if (i2 != 0)
		return (&big[i1 - i2]);
	else
		return (0);
}
