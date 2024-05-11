/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hitran <hitran@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:19:07 by hitran            #+#    #+#             */
/*   Updated: 2024/04/23 13:38:13 by hitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	char			*res_pt;
	unsigned int	i;

	if (!s)
		return (0);
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return (0);
	res_pt = res;
	i = 0;
	while (*s)
		*res++ = f(i++, *s++);
	*res = 0;
	return (res_pt);
}
