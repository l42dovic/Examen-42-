#include<unistd.h>
int ft_sp(int c)
{
    if (c == '\t' || c == ' ')
    return (1);
    return (0);
}
int main (int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
            while (argv[1][i] && ft_sp(argv[1][i]))
            i++;
            while (argv[1][i] && !ft_sp(argv[1][i]))
            {
                write (1, &argv[1][i], 1);
                i++;
            }
    }
    write (1, "\n", 1);
    return (0);
   
}