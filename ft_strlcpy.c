/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:18:56 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:26:52 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	a;
	size_t	len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	a = 0;
	while (src[a] && a < dstsize - 1)
	{
		if (dstsize == 0)
			return (len);
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (len);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main()
// {
//     char src[] = "42berlinschool";
//     char dst[12] = "";
//     char s[] = "42berlinschool";
//     char d[12] = "";
//     printf("%zu\n", ft_strlcpy(dst, src, 5));
//     printf("%zu\n", strlcpy(d, s, 5));
//     printf("%s\n", dst);
//     printf("%s\n", d);
//     return(0);
// }