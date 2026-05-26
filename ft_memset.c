/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 16:08:11 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:34:21 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		*ptr = (unsigned char)c;
		a++;
		ptr++;
	}
	return (s);
}

// int main()
// {
//     char s1[] = "This is the test one";
//     char s[] = "This is the test one";
//     ft_memset(s1 + 2, '.', 3);
//     memset(s + 2, '.', 3);
//     printf("%s\n", s1);
//     printf("%s", s);
//     return (0);
// }