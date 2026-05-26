/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkhadka <shkhadka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:14:42 by shkhadka          #+#    #+#             */
/*   Updated: 2026/05/21 17:32:40 by shkhadka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = (NULL);
	return (node);
}

// int main()
// {
//     t_list  *node;

//     node = ft_lstnew("Hello!");
//     printf("%s\n", (char *)node->content);
//     printf("%p", node->next);
//     free(node);
// }