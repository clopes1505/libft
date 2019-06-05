/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:25:07 by clopes            #+#    #+#             */
/*   Updated: 2019/05/27 12:16:26 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ftmemset(void *var, int x, size_t n)
{
	int 			k;
	int 			i;
	unsigned char	*y;
	k = 0;
	i = n;
	y = (unsigned char*)var;
	while(k < i)
	{
		y[k] = x;
		k++;
	}
	return(y);
}

