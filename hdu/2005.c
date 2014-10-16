#include <stdio.h>
int main()
{
	int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int y, m, d;
	int days = 0, i;
	int leap;
	while(scanf("%d/%d/%d", &y, &m, &d) != EOF)
	{
		days = 0;
		for(i = 1; i < m; i++)
		{
			days += months[i];
		}
		days += d;
		leap = (y % 4 == 0) ? ((y % 100 == 0) ? ((y % 400 == 0) ? 1 : 0 ) : 1) : 0;
		if (leap == 1 && m > 2)
			days += 1;

		printf("%d\n", days);
	}
	return 0;
}
