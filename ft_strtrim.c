#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    int start;
    int end;
    int len;

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = 0;
    end = ft_strlen(s1) - 1;
    while (end > start && ft_strchr(set, s1[end]))
        end--;
    len = end - start + 1;
    result = malloc(len + 1);
    if (!result)
        return NULL;
    int a;

    a = 0;
    while (a < len)
    {
        result[a] = s1[start + a];
        a++;
    }
    result[a] = '\0';
    return (result);
}

int main()
{
    char s[] = "xxshivaxxx";
    char set[] = "x";

    printf("%s", ft_strtrim(s, set));
}