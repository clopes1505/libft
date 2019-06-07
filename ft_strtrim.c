/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 08:44:58 by clopes            #+#    #+#             */
/*   Updated: 2019/06/07 12:47:29 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t len;
	size_t k;
	size_t i;

	k = 0;
	len = ft_strlen(s);
	while ((s[k]) && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
		k++;
	if (s[k] == '\0')
		return (ft_strnew(0));
	i = len - k;
	return (ft_strsub(s, k, i));
}
