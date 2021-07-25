#include <stdio.h>


int fib(int n)
{
	switch (n)
	{
		case 0: return 0;
		case 1: return 1;
		case 2: return 1;
	}
	return fib(n-1)+fib(n-2);
}

int main()
{
	printf("%d\n", fib(10));
	return 0;
}