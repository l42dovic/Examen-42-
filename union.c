#include <unistd.h>
int ft_occur(char *u, int i, char c)
{
    int k;

    k = 0;
    while (k < i)
    {
        if (u[k] == c)
        return (1);
        k++;
    }
    return (0);
}
void ft_union(char *s, char *t)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if ((!ft_occur(s, i, s[i])) && (!ft_occur(t, j, s[i])))
        write(1, &s[i], 1);
        i++;
    }
    while (t[j])
    {
        if ((!ft_occur(s, i, t[j])) && (!ft_occur(t, j, t[j])))
        write(1, &t[j], 1);
        j++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_union(argv[1], argv[2]);
    }
    write(1, "\n", 2);
    return (0);
    
}