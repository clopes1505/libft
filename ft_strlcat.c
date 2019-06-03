/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:45:44 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 13:40:06 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = ft_strlen(dst);
	while (src[k] && k < dstsize)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + k);
}
