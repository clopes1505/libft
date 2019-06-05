/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:29:52 by clopes            #+#    #+#             */
/*   Updated: 2019/06/05 09:32:35 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int k;
	k = 0;
	if (s != NULL)
	{
		while (s[k])
		{
			write(1, &s[k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
}
