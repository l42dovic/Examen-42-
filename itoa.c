#include <stdlib.h>
#include <stdio.h>

int ft_len(int nbr)
{
    int len;

    len = 0;
    if (nbr < 0)
    len ++;
    if (nbr == 0)
    return(1);
    while (nbr != 0)
    {
        nbr = nbr/ 10;
        len ++;
    }
    return(len);
}

char	*ft_itoa(int nbr)
{
    char *s;
    int i;
    int len;

    if (nbr == -2147483648)
        return ("-2147483648");
    len = ft_len(nbr);
    s = (char *)malloc(sizeof(*s) * len + 1);
    if (!s)
        return (NULL);
    if (nbr == 0)
    {
        s[0] = '0';
    }
    if (nbr < 0)
    {
        s[0] = '-';
        nbr *= -1;
    }
    
    i = len - 1;
    while (nbr != 0)
    {
        s[i] = (nbr % 10 + '0');
        nbr = nbr / 10;
        i--; 
    }
    s[len] = '\0';
    return (s);
}

int main()
{
    int nbr;

    nbr = -1234567;
    printf("%s", ft_itoa(nbr));
    return (0);

}
