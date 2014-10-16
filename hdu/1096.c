#include <stdio.h>
int main()
{
	int case_num,num,a;
	int sum, i;
	scanf("%d", &case_num);
	while(case_num--)
	{
		scanf("%d", &num);
		sum = 0;
		for(i = 1; i <= num; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
		if(case_num != 0)
			printf("\n");
	}
	return 0;
}
