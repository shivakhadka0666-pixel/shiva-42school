/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:08:37 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:31:21 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*dst;
	size_t	a;

	if (!s || len == 0)
		return (NULL);
	a = 0;
	src = (char *)s;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	while (a < len)
	{
		dst[a] = src[start + a];
		a++;
	}
	dst[a] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char	s[];
	char	*result;

	result = ft_substr(s, 5, 5);
	printf("%s", result);
	free(result);
	return (0);
}
	*/