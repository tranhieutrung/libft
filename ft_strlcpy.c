/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:40 by hitran            #+#    #+#             */
/*   Updated: 2024/04/23 13:38:04 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize < 1)
		return (srcsize);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (srcsize);
}
