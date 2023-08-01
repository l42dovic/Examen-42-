#include<unistd.h>
#include <stdio.h>
void ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}
int main (int argc, char **argv)
{
    char    *s;
    s = argv[1];
    if (argc == 2)
    {
        ft_putstr(s);
    }
    write(1, "\n", 1);
    
    return (0);

}