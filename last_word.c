#include <unistd.h>
int ft_sp(char c)
{
    if (c == '\t' || c == ' ')
    return (1);
    return (0);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char    *s;
        int i;

        s = argv[1];
        i = 0;
        while(s[i])
        i++;
        i--;
        while (i >= 0 && ft_sp(s[i]))
        i--;
        while (i >= 0 && !ft_sp(s[i]))
        i--;
        i++;
        while (s[i])
        {
            write(1, &s[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}