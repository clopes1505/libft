/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:16:10 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 11:35:31 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ftstrncpy(char *src, char *dst, size_t len)
{
size_t k;
	k = 0;
	while(dst[k] && k < len)
	{
		dst[k] =  src[k];
		k++;
	}	
	dst[k] = '\0';			
	return(dst);
}
