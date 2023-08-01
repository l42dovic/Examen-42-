#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int i)
{
    if (i > 9)
    ft_putnbr(i / 10);
    ft_putchar(i % 10 + '0');
}
int main (void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 != 0 && i % 5 != 0 )
        ft_putnbr(i);
        else 
        {
            if(i % 3 == 0)
            write (1, "fizz", 4);
            if (i % 5 == 0)
             write (1, "buzz", 4);
        }
        write (1, "\n",1);
        i++;
    }
    return (0);
}
