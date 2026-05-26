/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:16:18 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:33:03 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (ptr[a] == (unsigned char)c)
			return ((void *)&ptr[a]);
		a++;
	}
	return (NULL);
}

// int main()
// {
//     char s[] = "SHIVAKHADLA";
//     char *res;
//     char s1[] = "SHIVAKHADLA";
//     char *nres;

//     res = ft_memchr(s, 'A', 8);
//     printf("%ld\n", res - s);
//     nres = memchr(s1, 'A', 8);
//     printf("%ld", nres - s1);
// }