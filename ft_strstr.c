/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:53:08 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 14:10:35 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	k;
	int i;
	
	k = 0;
	i = 0;
	if (needle[k] == '\0')
		return((char *)haystack);
	while(haystack[k])
	{
		if (needle[k] == haystack[k])
			return((char*) &haystack[k]);
		k++;
	}
	return(NULL);
}
