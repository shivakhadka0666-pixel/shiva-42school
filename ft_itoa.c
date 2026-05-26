/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:32:09 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:30:12 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnum(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	int		neg;

	len = countnum(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		return (0);
	neg = (n < 0);
	while (n != 0)
	{
		len--;
		if (neg)
			result[len] = '0' - (n % 10);
		else
			result[len] = '0' + (n % 10);
		n /= 10;
	}
	if (neg)
		result[0] = '-';
	return (result);
}
// int	main(void)
// {
// 	int n = -2147483648;
// 	printf("%s", ft_itoa(n));
// }