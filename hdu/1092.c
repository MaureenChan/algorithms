#include <stdio.h>
int main()
{
	int n, sum = 0;
	int i, a;
	scanf("%d", &n);
	while(n != 0)
	{
		sum = 0;
		for(i = 1; i <= n; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);

		scanf("%d", &n);
	}

	return 0;
}
