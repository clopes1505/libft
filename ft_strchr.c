/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:00:33 by clopes            #+#    #+#             */
/*   Updated: 2019/06/03 13:52:59 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				k;
	const char		*pos;

	k = 0;
	pos = NULL;
	while (s[k])
	{
		if ((unsigned char)s[k] == c)
		{
			pos = &s[k];
			break ;
		}
		else
			k++;
	}
	return ((char *)pos);
}
