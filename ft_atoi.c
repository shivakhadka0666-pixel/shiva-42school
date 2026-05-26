/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 12:47:04 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:10:43 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	sign = 1;
	result = 0;
	while (nptr[a] == ' ' || (nptr[a] >= 9 && nptr[a] <= 13))
		a++;
	if (nptr[a] == '+' || nptr[a] == '-')
	{
		if (nptr[a] == '-')
			sign *= -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		result = result * 10 + (nptr[a] - '0');
		a++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	char s1[] = "    -234hdmc";
// 	printf("%d\n", ft_atoi(s1));
// 	char s[] = "    -234hdmc";
// 	printf("%d", atoi(s));
// }
