/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:14:42 by clopes            #+#    #+#             */
/*   Updated: 2019/05/23 12:49:32 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_atoi(const char *str)
{
	int res;
	int sign;
	int k;

	sign = 1;
	k = 0;
	while (str[k] < 32 && str[k])
		k++;
	if (str[k] == '-' || str[k] == '+')
	{

		if (str[k] == '-')
			sign = -1;
		k++;
	}
	while ((str[k] >= '0' && str[k] <= '9') && str[k])
	{
		res = (res * 10) + (str[k] - '0');
		k++;
	}
	return (res * sign);
}
int		main(void)
{
	printf("%d", ft_atoi("12346"));
}
