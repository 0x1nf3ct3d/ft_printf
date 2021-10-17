#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	
	if (n < 0)
	{
		i = -n;
		write(fd, "-", 1);
	}
	else
		i = n;
	if (i > 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	if (i < 10)
	{
		i += 48;
		write(fd, &i, 1);
	}
}