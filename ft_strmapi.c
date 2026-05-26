/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:57:55 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 18:27:24 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		a;
	int		len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	a = 0;
	while (s[a])
	{
		temp[a] = f(a, s[a]);
		a++;
	}
	temp[a] = '\0';
	return (temp);
}

// char ft_upper(unsigned int n, char c)
// {
// 	(void)n;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main()
// {
// 	char const *s = "137";
// 	char *result;
// 	result = ft_strmapi(s, ft_upper);
// 	printf("%s", result);
// }