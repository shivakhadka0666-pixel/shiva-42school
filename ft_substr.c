// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s || len == 0)
        return NULL;
    char *result = (char *)malloc(len + 1);

    if (!result)
        return NULL;

    char *src = (char *)s;

    size_t i = 0;
    while (i < len)
    {
        result[i] = src[start + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}
// #include <stdio.h>

int main()
{
    char s[] = "shivakhadka 42";
    // char p[] = "shivakhadka 42";

    // char *nresult = substr(p, 6, 6);
    printf("%s\n", ft_substr(s, 5, 0));
    // printf("%s", nresult);
    return (0);
}