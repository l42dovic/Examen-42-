#include<stdlib.h>
#include <stdio.h>
int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    i++;
    return (i);
}
int main(int argc, char **argv)
{
    char    *s;

    s = argv[1];
    if(argc == 2)
    {
        printf("le nombre %d", ft_strlen(s));
    }
    return (0);
}
