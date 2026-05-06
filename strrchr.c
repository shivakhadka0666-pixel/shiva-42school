#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

char *ft_strchr(char *s, int c)
{
    int a;
    a = 0;

    while (s[a])
        a++;
    a--;
    while (s[a])
    {
        if (s[a] == c)
            return (&s[a]);
        a--;
    }
    if (c == '\0')
        return (NULL);
    return (0);
}
int main()
{
    char s1[] = "shiva khadka";
    char *result;

    result = ft_strchr(s1, 'h');
    printf("%s", result);
    return (0);
}