/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:57:14 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:34:07 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	if (ptrdest > ptrsrc)
	{
		while (n--)
		{
			ptrdest[n] = ptrsrc[n];
		}
	}
	else
	{
		while (n--)
		{
			*ptrdest++ = *ptrsrc++;
		}
	}
	return (dest);
}

// int main()
// {
//     char src[] = "shivakhadka";
//     char s1[] = "lemon";
//     char *result;
//     char s[] = "shivakhadka";
//     char s2[] = "lemon";
//     char *nresult;

//     result = ft_memmove(src + 2, s1, 0);
//     nresult = memmove(s +2, s2, 0);
//     printf("%s\n", result);
//     printf("%s", nresult);
//     return (0);
// }
