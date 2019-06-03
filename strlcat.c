/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:45:44 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 11:31:05 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	tot;

	s = ft_strlen((char *)src);
	i = ft_strlen((char *)dst);
	tot = s + i - 1;
	if (dstsize > tot)
		return (tot);
	else
		return ('\0');
}
