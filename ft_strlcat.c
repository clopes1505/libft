/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:45:44 by clopes            #+#    #+#             */
/*   Updated: 2019/06/06 11:32:51 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	int k;
	
	s = ft_strlen((char *)src);
	i = ft_strlen((char *)dst);
	k = 0;
	while(src[k])
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';	
	if (dstsize > i)
		return (i + s);
	return (dstsize + s);
}
