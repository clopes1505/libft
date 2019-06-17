/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:41:08 by clopes            #+#    #+#             */
/*   Updated: 2019/06/17 15:23:23 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	ft_numlen (long n)
{

	int k;

	k = 0;
	if (n < 0)	
		k++;
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
	int		len;
	int		sign;

	sign = 1;
	len = ft_numlen(n);
	i = 0;
	if (!(num = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		num[0] = '-';
		sign = -1;
		i++;
	}
//	if (n == 0)
//		return ("0");	
	num[len--] = '\0';
	while (len > i)
	{
		num[len] = ('0' + (n % 10) * sign);
		n /= 10;
		len--;
	}
	return (num);
}
int		main(void)
{
	printf("%s\n", ft_itoa(-5536));
	return(0);
}
