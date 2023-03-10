#include <stdio.h>

long pascaltriangle(int, int);

int main()
{
 	int n = 10;

	for(int k = 0; n >= k; k++)
	{
		for(int s = 0; s < n-k; s++)
			printf(" ");
		for(int m = 0; k >= m; m++)
		{
			long f = pascaltriangle(k, m);
			printf("%ld ", f);
		}
		printf("\n");
	}
	return 0;
}

long pascaltriangle(int n, int i) 
{
	if(n == i || i == 0)
		return 1;
	else
		return pascaltriangle(n-1, i) + pascaltriangle(n-1, i-1);
}
