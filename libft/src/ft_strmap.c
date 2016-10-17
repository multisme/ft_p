/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takiapo <takiapo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 18:48:13 by takiapo           #+#    #+#             */
/*   Updated: 2014/09/13 17:11:50 by takiapo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t		ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char				*ft_strmap(char const *s, char (*f)(char))
{
	char	*p;
	char	*p2;

	if (s == NULL)
		return (NULL);
	p = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	p2 = p;
	if (p == NULL)
		return (NULL);
	while (*s)
	{
		*p++ = (*f)(*s);
		s++;
	}
	*p++ = '\0';
	return (p2);
}
