/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:41:08 by clopes            #+#    #+#             */
/*   Updated: 2019/06/14 14:50:09 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen (long n)
{

	int k;

	k = 0;
	if (n < 0)
	{
		n *= -1;
		k++;
	}
	while (n >= 1)
	{
		n /= 10;
		k++;
	}
	return (k);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		i;

	i = 0;
	if(!(num = malloc(sizeof(char) * ft_numlen(n) + 1)))
		return (NULL);
	
}
