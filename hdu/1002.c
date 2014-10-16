#include <stdio.h>
int main()
{
	int case_num;
	int i = 1;
	long int a, b;
	scanf("%d", &case_num);
	while (i <= case_num)
	{
		scanf("%ld%ld",&a,&b);
		printf("Case %d:\n",i);
		printf("%ld + %ld = %ld\n\n", a, b, a + b);
	}
	
}
