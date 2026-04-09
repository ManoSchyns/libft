#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nbr;
    char c;

    if (fd < 0)
        return ;
    nbr = n;
    if (nbr < 0)
    {
        write (fd, "-", 1);
        nbr *= -1;
    }
    if (nbr >= 10)
        ft_putnbr_fd(nbr / 10, fd);
    c = nbr % 10 + '0';
    write (fd, &c, 1);
}