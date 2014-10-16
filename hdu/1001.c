#include <stdio.h>
int main()
{
	int n, sum = 0, i = 1;
	while(scanf("%d", &n) != EOF)
	{
		sum = 0;
		i = 1;
		while(i <= n)
		{
			sum = sum + i;
			i++;
		}
		printf("%d\n\n", sum);
	}
	return 0;
}
