/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 08:44:58 by clopes            #+#    #+#             */
/*   Updated: 2019/06/08 11:25:37 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t 	len;
	size_t 	k;
	size_t	i;
	char 	*s1;

	k = 0;
	i = 0;
	
	if (s == NULL)
		return(NULL);
	len = ft_strlen(s);	
	while ((s[k]) && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
	k++;
	while (len > 0 && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (len == k)
		return (ft_strnew(1));
	if (!(s1 = (char*)malloc(sizeof(char) * (len - k) + 1)))
		return (NULL);
	while (s[k + i] && len > (k + i))
	{
		s1[i] = s[k + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
