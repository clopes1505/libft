/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:10:55 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 14:16:11 by clopes           ###   ########.fr       */
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
        while(haystack[k] && k < (int)len)
        {
                if (needle[k] == haystack[k])
                        return((char*) &haystack[k]);
                k++;
        }
        return(NULL);
}
