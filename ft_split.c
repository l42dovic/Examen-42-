#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int ft_sp(int c)
{
    while (c == '\t' || c == ' ' || c == '\n')
    return (1);
    return (0);
}
 int count_words(char *s)
 {
    int i;
    int cw;

    i= 0;
    cw = 0;
    while (s[i])
    {
        while (s[i] && ft_sp(s[i]))
        i++;
        if( s[i] != '\0')
        cw++;
        while (s[i] && !ft_sp(s[i]))
        i++;
    }
    return (cw);
 }
 char *get_words(char **s)
 {
    char    *nw;
    int i;
    int j;
    int k;
    int len;

    i = 0;
    j = 0;
    k = 0;
    while((*s)[i] && ft_sp((*s)[i]))
    i++;
    j = i;
    while((*s)[i] && !ft_sp((*s)[j]))
    j++;
    len = j - i;
    nw = (char *)malloc(sizeof(*nw) * (len + 1));
    if (!nw)
    return (NULL);
    while (k < len)
    {
        nw[k] = (*s)[i];
        k++;
        i++;
    }
    nw[k] = '\0';
    while((*s)[i] && !ft_sp((*s)[i]))
    i++;
    *s = &(*s)[i];
    return (nw);
}

char **ft_split(char *str)
{
    char    **arr;
    int cw;
    int i;

    i = 0;
    cw = count_words(str);
    arr = (char **) malloc(sizeof(*arr) * cw + 1);
    if (!arr)
    return(NULL);
    while (i < cw)
    {
        arr[i] = get_words(&str);
        if (arr[i] == NULL)
        return (NULL);
        i++;
    }
    arr[i] = NULL;
    return (arr);
}
int main()
{
    char    **arr;
    int i;
    char    *s;

    i = 0;
    s = "coucou je suis un extra-terrestre \t \n\t de la planète ... \n";
    arr = ft_split(s);
    while(arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }
    return (0);

}
