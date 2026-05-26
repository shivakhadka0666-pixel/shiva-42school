/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:03:25 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:36:32 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char *s, int fd)
{
	int	a;

	if (!s)
		return ;
	a = 0;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}

// int main()
// {
//     char s[] = "shiva";
//     ft_putendl(s, 1);
// }