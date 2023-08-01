#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
    size_t i;
    size_t len;
    int sign;
    int    *arr;
    
    i = 0;
    sign = 1;
    if (start > end)
    sign = -1;
    len = (end - start) * sign + 1;
    arr = (int *)malloc(sizeof(*arr) * len);
    if (!arr)
    return (NULL);
    while (i < len)
    {
        arr[i] = end - i * sign;
        i++;
    }
    return (arr);


}
int	main(int argc, char **argv)
{
	int	*arr;
	int	start;
	int 	end;
	int	len;
	int	i;

	i = 0;
	if (argc != 3)
		return (0);
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	arr = ft_range(start, end);
	if (end < start)
		len = start - end + 1;
	else
		len = end - start + 1;
	while (i < len)
	{
		printf ("%d | ", arr[i]);
		i++;
	}
	free (arr);
	printf ("\n");
	return (0);
}