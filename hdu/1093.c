#include <stdio.h>
int main()
{
	int case_num, num, a;
	int sum = 0, i = 1, j = 1;
	scanf("%d", &case_num);
	while(i <= case_num)
	{
		scanf("%d", &num);
		sum = 0;
		j = 1;
		i++;
		while(j <= num)
		{
			scanf("%d", &a);
			sum += a;
			j++;
		}
		printf("%d\n", sum);
	}
	return 0;

}
