/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:17:32 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 12:25:48 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t k;
	unsigned char *s1;
	unsigned char c1;

	s1 = (unsigned char *)s;
	c1 = c;
	if (s1 == NULL)
		return(NULL);
	k = 0;
	while(k < n)
	{
		if (s1[k] == c1)
			return((void *) &s1[k]);
		k++;
	}
	return(NULL);
}
