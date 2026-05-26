/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:55:22 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/26 15:21:20 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totallen;
	void	*ptr;

	if (size > 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	totallen = nmemb * size;
	ptr = malloc(totallen);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totallen);
	return (ptr);
}
