#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char ** argv)
{
    if (argc == 2)
    {
        int i;
        char *s;

        i = 0;
        s = argv[1];
        while (s[i])
        {
            if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
            {
                ft_putchar(s[i] + 1);

            }
            else if ((s[i] == 'z') || (s[i] == 'Z'))
            {
                ft_putchar(s[i] - 25);
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
