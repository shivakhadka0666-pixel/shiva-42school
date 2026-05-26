/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:18:50 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:16:36 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (srclen + dstlen);
	b = 0;
	while (dst[b])
		b++;
	a = 0;
	while (src[a] && a < dstsize - dstlen - 1)
	{
		dst[b + a] = src[a];
		a++;
	}
	dst[a + b] = '\0';
	return (srclen + dstlen);
}

// #include <bsd/string.h>
// int main()
// {
//     char src[] = "42berlinschool";
//     char dst[] = "fg";
//     char s[] = "42berlinschool";
//     char d[] = "fg";
//     printf("%zu\n", ft_strlcat(dst, src, 4));
//     printf("%zu\n", strlcat(d, s, 4));
//     printf("%s\n", dst);
//     printf("%s\n", d);
//     return(0);
// }
