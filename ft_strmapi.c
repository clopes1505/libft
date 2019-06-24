/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:55:42 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 11:59:24 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		k;
	char	*str;
	int		len;

	len = ft_strlen(s);
	k = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[k])
	{
		str[k] = f(k, s[k]);
		k++;
	}
	str[k] = '\0';
	return (str);
}
