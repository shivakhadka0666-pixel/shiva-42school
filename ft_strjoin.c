#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int s1len;
    int s2len;

    s1len = 0;
    s2len = 0;
    while (s1[s1len])
    {
        s1len++;
    }
    while (s2[s2len])
    {
        s2len++;
    }
    char *result = malloc(s1len + s2len + 1);
    if (!result)
        return NULL;
    s1len = 0;
    while (s1[s1len])
    {
        result[s1len] = s1[s1len];
        s1len++;
    }
    s2len = 0;
    while (s2[s2len])
    {
        result[s1len + s2len] = s2[s2len];
        s2len++;
    }
    result[s1len + s2len] = '\0';
    return (result);
}
#include <stdio.h>

int main()
{
    char s[] = "shiva ";
    char s1[] = "khadka";

    printf("%s", ft_strjoin(s, s1));
}