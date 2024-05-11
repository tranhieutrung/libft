/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:39:22 by hitran            #+#    #+#             */
/*   Updated: 2024/04/23 13:37:07 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_pt;
	unsigned char	ch;

	s_pt = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if (*s_pt == ch)
			return (s_pt);
		s_pt++;
	}
	return (0);
}
