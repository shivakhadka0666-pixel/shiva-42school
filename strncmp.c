#include <string.h>
#include <stdio.h>
#include <stddef.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t a;

    a = 0;
    while (s1[a] && s2[a] && a < n)
    {
        if (s1[a] == s2[a])
        {
            a++;
        }
        else
            return (s1[a] - s2[a]);
    }
    return (0);
}

int main()
{
    char s1[] = "shiva";

    char s2[] = "shivb";
    printf("%d", ft_strncmp(s1, s2, 3));
    return (0);
}