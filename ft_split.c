/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:03:46 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:50:46 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**free_result(char **result, int j)
{
	while (j-- > 0)
		free(result[j]);
	free(result);
	return (NULL);
}

static char	*fill_word(char const *s, char c, int *i)
{
	int	start;
	int	len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] && s[*i] != c)
	{
		len++;
		(*i)++;
	}
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = (char **)malloc((countword(s, c) + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		result[j] = fill_word(s, c, &i);
		if (!result)
		{
			free_result(result, j);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

// int	main(void)
// {
// 	int		i;
// 	char	**result;

// 	result = ft_split("hello my name is", ' ');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
//     i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
