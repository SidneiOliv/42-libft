/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:05:08 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/30 20:33:12 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	int	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, num);
	return (ptr);
}
