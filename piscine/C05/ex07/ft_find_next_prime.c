#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return(nb);
}

int main()
{
	printf("%d", ft_find_next_prime(42));
}