/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:10:55 by clopes            #+#    #+#             */
/*   Updated: 2019/06/08 16:05:46 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
		int k;
        int i;

        k = 0;
        i = 0;
        if (needle[k] == '\0')
                return((char *)haystack);
		if (needle == NULL && haystack == NULL)
			return (NULL);
        while(haystack[k] && k < (int)len)
        {
			i = 0;
			while(needle[i] == haystack[k + i] && needle[i])
			{
				i++;
                if (needle[k] == '\0')
                        return((char*) haystack + k);
			}
                k++;
        }
        return(NULL);
}
