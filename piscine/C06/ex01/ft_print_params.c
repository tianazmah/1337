#include <unistd.h>


int main(int argc, char *argv)
{
	int i;
	int j;

	i = 1;
	while (i <= argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, argv[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}