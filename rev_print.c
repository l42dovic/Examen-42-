#include <unistd.h>
#include <stdio.h>
char *rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i])
    i++;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;

    }
   // write (1, "\n", 1);
    return (str);
}
int main (int argc, char **argv)
{
    char    *str;

    str = argv[1];
    if (argc == 2)
    printf("%s", rev_print(str));
    return (0);
}
/*int main(int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while (argv[1][i] != '\0')
        i++;
        while (i > 0)
        {
            write(1, &argv[1][i - 1], 1);
            i--;
        }
        
    
    }
    write (1, "\n", 1);
    return (0);
}*/