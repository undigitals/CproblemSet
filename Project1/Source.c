#include<stdio.h>
#include<math.h>
int main()
{
	int i, sum = 0, n;
	scanf("%d", &n);
	if (abs(n) <= 10000)
	{
		if (n <= 0)
		{
			for (i = 1; i >= n; i--)
				sum += i;
		}

		else
		{
			sum = ((n*n) + n) / 2;
		}

		printf("%d", sum);

	}
	return 0;
}
