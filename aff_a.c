#include<unistd.h>
int main (int argc, char **argv)
{
    char    *s;
    int i;

    
    s = argv[1];
    i = 0;
    if (argc == 2)
    if (s[i])
    {
        write(1, "z\n", 2);
        return (0);
    }
     write(1, "z\n", 2);
        return (0);
}



















/*int main (int argc, char **argv)
{
    char    *s;
    char    c;
    int     i;

    i = 0;
    s = argv[2];
    c = 'a';
    if (argc == 2)
    while (s[i])
    {
        if (s[i] == c || *s != argv[2])
        write (1, &c, 1);
        i++;
    }
    write (1, &c, 1);
    return (0);
}*/