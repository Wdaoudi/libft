
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(const char *nptr)
{
    int     nbr;
    int     i;
    int     signe;

    i = 0;
    signe = 1;
    nbr = 0;
    while (nptr[i] == 9 || nptr[i] == 20 || nptr[i] == 10 || nptr[i] == 11)
        i ++;
    while (nptr[i] == 43 || nptr[i] == 45)
        if (nptr[i] == 43)
            i ++;
        else if (nptr[i] == 45)
            {
                signe = -signe;
                i ++;
            }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
        nbr = 10 * nbr + nptr[i] + 48;
        i ++;
    }
    nbr = nbr * signe;
    return (nbr);
}

int main (int ac, char *av[])
{
    if (ac != 2)
        return 0;
    else 
    {
        printf ("%d", ft_atoi(av[1]));
    }
    return 0;
}