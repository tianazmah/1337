#include <stdio.h>
int ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	
}


int main()
{
	printf("%d", ft_fibonacci(6));
	return 0;
}