/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clopes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:45:44 by clopes            #+#    #+#             */
/*   Updated: 2019/05/27 12:06:22 by clopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	tot;

	s = ft_strlen((char *)src);
	i = ft_strlen((char *)dst);
	tot = s + i - 1;
	if (dstsize > tot)
		return (tot);
	else
		return ('\0');
}
