#include <stdio.h>
#include <stdlib.h>

int countword(char const *s, char c)
{
    int a;
    int count;

    a = 0;
    count = 0;
    while (s[a])
    {
        if (s[a] != c && (a == 0 || s[a - 1] == c))
            count++;
        a++;
    }
    return (count);
}
char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;
    int words;
    char **result;

    words = countword(s, c);
    result = malloc(words + 1);
    if (!result)
        return NULL;
    int i;
    int j;
    int len;
    int start;

    i = 0;
    j = 0;
    while (j < words)
    {
        while (s[i] == c)
            i++;
        start = i;
        len = 0;
        while (s[i] && s[i] != c)
        {
            len++;
            i++;
        }
        result[j] = ft_substr(s, start, len);
        j++;
    }
    result[j] = NULL;
    return (result);
}
