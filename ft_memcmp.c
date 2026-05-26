/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:47:55 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:33:32 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	a = 0;
	while (ptr1[a] && ptr1[a] == ptr2[a] && a < n - 1)
	{
		a++;
	}
	return (ptr1[a] - ptr2[a]);
}

// int main()
// {
//     char s1[] = "shiva";
//     char s2[] = "shia";
//     char s3[] = "shiva";
//     char s4[] = "shia";

//     printf("%d\n", ft_memcmp(s1, s2, 8));
//     printf("%d", memcmp(s3, s4, 8));
//     return (0);
//  }