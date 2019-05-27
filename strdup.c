/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:30:40 by clopes            #+#    #+#             */
/*   Updated: 2019/05/24 07:29:10 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(const char *s1)
{
	int		k;
	int		size;
	char	*dup;

	k = 0;
	size = ft_strlen((char *)s1);
	dup = (char *)malloc(size * sizeof(char));
	while (s1[k])
	{
		dup[k] = s1[k];
		k++;
	}
	return (dup);
}
