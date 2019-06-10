/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:29:00 by clopes            #+#    #+#             */
/*   Updated: 2019/06/10 16:29:09 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count words in str delimited by c
static int	ft_wordcount(char *s, char c)
{
	int k;
	int i;

	while(s[k])
	{
		if (s[k] == c && s[k + 1] != c)
			i++;
		k++;
	}
	return (i);
}
// count length of a string upto c
static int	ft_wordlen(char *s, char c)
{
	int k;
	int i;

	i = 0;
	k = 0;
	while(s[k])
	{
		if (s[k] == c)
			k++;
		else 
		{
			i++;
			k++;
		}
	}
	return (i);
}
//maloc for word count and strlen
char	**ft_strsplit(char const *s, char c)
{
	char	*arr[ft_wordlen];
	int		len;
	int		k;

	len = ft_strlen(s);
	if (!(arr = (char *)malloc(sizeof (char * len))))
		return(NULL);
	while (s[k])
	{
		if (s[k] == c)
			k++;
		else
		{
			s[k] = arr[k];
			k++;
		}
	}
	return (arr);
}
