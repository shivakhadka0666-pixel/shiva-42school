/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:01:32 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:27:44 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (!n)
		return (0);
	while (s1[a] && a < n - 1 && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}

// int main()
// {
//     char s1[] = "shiva";
//     char s2[] = "";
//     char s[] = "shiva";
//     char p[] = "";
//     printf("%d\n", ft_strncmp(s1, s2, 4));
//     printf("%d", strncmp(s, p, 4));
//     return (0);
// }