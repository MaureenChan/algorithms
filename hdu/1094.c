#include <stdio.h>
int main()
{
	int num, a, i;
	int sum = 0;
	while(scanf("%d", &num) != EOF)
	{
		sum = 0;
		for(i = 1; i <= num; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;

}
