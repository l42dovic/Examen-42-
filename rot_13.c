#include <unistd.h>
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(int argc, char **argv)
{
    
    if (argc == 2)
    {
        char    *s;
        int i;

        s = argv[1];
        i = 0;
        while (s[i])
        {
            if ((s[i] && (s[i] >= 'a' && s[i] < 'n')) || (s[i] >= 'A' && s[i] < 'N'))
            {
                ft_putchar(s[i] + 13);
            }
            else if((s[i] && (s[i] >= 'm' && s[i] <= 'z')) || (s[i] >= 'M' && s[i] <= 'Z'))
            {
                ft_putchar(s[i] - 13);
            }
            else
            {
                ft_putchar(s[i]);
            }
             i++;
        }
        
    }
    write (1, "\n", 1);
    return (0);
}