/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:29:00 by clopes            #+#    #+#             */
/*   Updated: 2019/06/12 16:40:05 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// count words in str delimited by c
static int	ft_wordlen(char *s, char c)
{
	int k;
	int i;

	i = 0;
	k = 0;
	while (s[k] && s[k] != c)
	{
		k++;
		i++;
	}
	return (i);
}
static int	ft_wordcount(char *s, char c)
{
	int k;
	int wordcount;
	int i;

	wordcount = 0;
	i = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] == c)
		{
			k++;
			wordcount = 0;
		}
		if (s[k] != c && wordcount == 0)
		{
			wordcount = 1;
			k++;
			i++;
		}
		k++;
	}
	return (i);
}
//maloc for word count and strlen
char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		x;
	int		k;
	int		i;

	k = 0;
	x = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = malloc(sizeof(arr) * (ft_wordcount((char *)s, c) + 1))))
		return(NULL);
	while (s[k])
	{
		if (s[k] == c)
			k++;
		else
		{
			i = k;
			while (s[k] != c && s[k])
			{
				arr[x] = ft_strsub(s, i, ft_wordlen((char *)s, c));
				k++;
			}
			x++;
		}
	}
	return (arr);
}
int		main(void)
{
	int		i;
	char	**str;

	i = 0;
	str = ft_strsplit("Hello**World", '*');
	while (i < ft_wordcount("Hello**World", '*'))
	{
		ft_putendl(str[i]);
		i++;
	}
	return (0);
}
