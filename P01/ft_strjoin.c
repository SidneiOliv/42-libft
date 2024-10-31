/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:40:35 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/10/31 16:44:15 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*subs;

	subs = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	printf ("lenght : %d\n", (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (subs == NULL)
		return (0);
	ft_strlcpy(subs, s1, ft_strlen(s1));
	ft_strlcat(subs, s2, ft_strlen(s2));
	return (subs);
}
