/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:40:20 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:30:30 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	a;
	size_t	b;

	if (small[0] == '\0')
		return ((char *)big);
	a = 0;
	while (big[a])
	{
		b = 0;
		while (big[a + b] == small[b] && small[b] != '\0' && a < len)
		{
			b++;
		}
		if (small[b] == '\0')
		{
			return ((char *)&big[a]);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "shiva love 42 berlin";
	char	s2[] = "";
	char	*res;
	char	s[] = "shiva love 42 berlin";
	char	p[] = "";
	char	*nres;

	res = ft_strnstr(s1, s2, 22);
	nres = strnstr(s, p, 22);
	printf("%s\n", res);
	printf("%s", nres);
	return (0);
}*/
