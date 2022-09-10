#include <unistd.h>
#include <stdio.h>
char *rev_print(char *str)
{
	int j;
	int a;

	j = 8;
	while (j != 0)
	{
		j--;
		printf("%d ", j);	
		a = str[j];
		write(1, &a, 1);
	}
	printf("\n%s\n", str);
	return (str);
}

int main()
{
	rev_print("hamzmar");
}