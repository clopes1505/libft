/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:30:40 by clopes            #+#    #+#             */
/*   Updated: 2019/06/08 15:13:37 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		k;
	int		size;
	char	*dup;

	k = 0;
	size = ft_strlen((char *)s1);
	if (!(dup = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (s1[k])
	{
		dup[k] = s1[k];
		k++;
	}
	dup[k] = '\0';
	return (dup);
}
