/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:35:49 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:58:14 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		a;
	char	*str;
	char	*dup;

	a = 0;
	str = (char *)s;
	while (str[a])
		a++;
	dup = malloc(a + 1);
	if (!dup)
		return (NULL);
	a = 0;
	while (str[a])
	{
		dup[a] = str[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}

// int main()
// {
//     char src[] = "";
//     char src1[] = "";
//     char *dup;
//     char *dup1;
//     dup = ft_strdup(src);
//     dup1 = strdup(src1);

//     printf("%s\n", src);
//     printf("%s", src1);
//     free(dup);
//     free(dup1);
//     return (0);
// }