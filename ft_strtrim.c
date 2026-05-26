/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:03:22 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:26:01 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	char	*str;

	start = 0;
	str = (char *)s1;
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && ft_strchr(set, str[end]))
		end--;
	result = ft_substr(str, start, end - start + 1);
	return (result);
}

// int	main(void)
// {
// 	char s[] = "xshxivbaxxxab";
// 	char set[] = "xab";

// 	printf("%s", ft_strtrim(s, set));
// }