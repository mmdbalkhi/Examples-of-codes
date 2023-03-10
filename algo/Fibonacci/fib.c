#include <stdio.h>

int fib(int n) {
  int i, f[n + 1];
  f[0] = 1;
  f[1] = 1;
  for (i = 2; i <= n; i++)
    f[i] = f[i - 1] + f[i - 2];
  return f[n];
}

int main() {
  printf("%d\n", fib(10));
  return 0;
}
