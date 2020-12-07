/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneve <gneve@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 03:08:49 by gneve             #+#    #+#             */
/*   Updated: 2020/11/23 02:59:44 by gneve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	j = 0;
	if (start <= ft_strlen(s))
	{
		i = start;
		while (i < len + start)
		{
			str[j++] = s[i++];
		}
	}
	str[j] = '\0';
	return (str);
}
