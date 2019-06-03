/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:55:04 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 13:06:48 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t k;

	k = 0;
	while(src[k] && k < len)
	{
		dst[k] = src[k];
	   	k++;
	}
	while (k < len)
	{
		dst[k] = '\0';
		k++;
	}
	return(dst);
}
