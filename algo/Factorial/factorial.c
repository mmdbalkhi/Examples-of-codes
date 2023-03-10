#include <stdio.h>

int factorial(int n)
{
        switch (n)
        {
                case 1:
                        return 1;
                case 2:
                        return 2;
                default:
                        return factorial(n - 1) * n;
        }
}

int main()
{
  printf("%d\n", factorial(4));
  return 0;
}
