#include<unistd.h>
int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
    i++;
    return (i);
}
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
void ft_inter(char *s, char *t)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(t);
    while (s[i])
    {
        if (!ft_occur(s, i, s[i]) && (ft_occur(t, j, s[i])))
        {
            write (1, &s[i], 1);
            
        }
        i++;

    }
}
int main (int argc, char **argv)
{
    if (argc == 3)
    {
        ft_inter (argv[1], argv[2]);
    }
    write (1, "\n", 1);
    return (0);
}