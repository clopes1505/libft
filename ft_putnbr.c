/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:39:13 by clopes            #+#    #+#             */
/*   Updated: 2019/06/20 16:29:09 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int      ft_numlen(long n)
{
    int k;

    k = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        k++;
        n *= -1;
    }
    while (n > 0)
    {
        n /= 10;
        k++;
    }
    return (k);
}

static char		ft_strrev(char *str, int n)
{
	int 	len;
	char	*rev;
	int 	k;
	int		i;
	char	*temp;

	rev = str;
	len = ft_numlen(n);
	k = 0;
	i = len;
	while(k < len)
	{
		temp[k] = rev[i];
		k++;
		i--;
	}
	return(*temp);
}

void			ft_putnbr(int n)
{
	long	nbr;
	int 	len;
	char	*temp;
	int		k;

	k = 0;
	len = ft_numlen(n);
	nbr = n;
	if (n <= 0)
	{
		ft_putchar('-');
		nbr *= -1;
		n *= -1;
	}
	printf("%s\n" , "hello");

	while (n > 0)
	{ 
		printf("%s\n", "hello");
		nbr = n % 10;
		temp[k] = (char)nbr;
		n /= 10;
		k++;
	}
	printf("%c", ft_strrev(temp, n));
}
int		main()
{
	ft_putnbr(-15);
}
