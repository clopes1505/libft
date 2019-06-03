/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:07:08 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 12:17:02 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t k;
	char *dst1;
	char *src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (dst1 == NULL && src1 == NULL)
		return(NULL);
	k = 0;
	while(k < len)
	{
		dst1[k] = src1[k];
	   	k++;
	}
	return((void *)dst1);
}
