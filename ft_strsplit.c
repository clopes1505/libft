/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:29:00 by clopes            #+#    #+#             */
/*   Updated: 2019/06/24 12:20:39 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char *s, char c)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (s[k] == c)
		k++;
	while (s[k] != c && s[k] != '\0')
	{
		i++;
		k++;
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
		if (s[k] == c && wordcount == 1)
			wordcount = 0;
		if (s[k] != c && wordcount == 0)
		{
			wordcount = 1;
			i++;
		}
		k++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		x;
	int		k;
	int		i;

	k = 0;
	x = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(arr = malloc(sizeof(char *) * (ft_wordcount((char *)s, c) + 1))))
		return (NULL);
	while (s[k] != '\0')
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		i = ft_wordlen(((char *)s) + k, c);
		arr[x] = ft_strsub(s, k, i);
		k += i;
		x++;
	}
	return (arr);
}
