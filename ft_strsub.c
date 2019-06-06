/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:58 by clopes            #+#    #+#             */
/*   Updated: 2019/06/06 15:38:48 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int size;
	char *s1;

	s1 = (char *)s;
	size = ft_strlen(s1);
	if (!(s1 = malloc(len)))
		return(NULL);
	ft_bzero((void *)s1 + start, len);
	s1[size] = '\0';
	return(s1);
}
