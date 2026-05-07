/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shivakhadka <shivakhadka@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:39:38 by shivakhadka       #+#    #+#             */
/*   Updated: 2026/05/07 12:07:40 by shivakhadka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t a;
    unsigned char *ptrsrc;
    unsigned char *ptrdst;

    ptrsrc = (unsigned char *)src;
    ptrdst = (unsigned char *)dst;

    if (dst == NULL && src == NULL)
        return (NULL);
    a = 0;
    while (ptrsrc[a] && a < n)
    {
        ptrdst[a] = ptrsrc[a];
        a++;
    }
    ptrdst[a] = '\0';
    return (dst);
}
int main()
{
    char src[] = "";
    char dst[] = "";
    char *result;
    char s[] = "";
    char d[] = "";
    char *nresult;

    result = ft_memcpy(dst, src, 3);
    nresult = memcpy(d, s, 3);
    printf("%s\n", result);
    printf("%s", nresult);
    return (0);
}