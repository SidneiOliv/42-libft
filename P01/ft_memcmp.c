/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:29:37 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/30 20:44:13 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char		*s1;
	const char		*s2;
	unsigned int	i;

	s1 = (const char *)str1;
	s2 = (const char *)str2;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i] && i < n)
		return (s1[i] - s2[i]);
	return (0);
}
