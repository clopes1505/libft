/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:52:23 by clopes            #+#    #+#             */
/*   Updated: 2019/06/05 16:22:00 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int 	k;
	char 	*str;
	int		len;

	len = ft_strlen(s);
	str = NULL;
	k = 0;
	if (s)
	{
		if (!(str = malloc((len +1) * sizeof(char))))
			return (NULL);
		while (s[k])
		{
			str[k] = f(s[k]);
			k++;
		}		
		str[k] = '\0';
		return (str);
	}
	return(NULL);
}
