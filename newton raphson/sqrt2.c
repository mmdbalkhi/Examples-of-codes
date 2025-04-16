#include <stdio.h>

double absolute(double x) { return x < 0 ? -x : x; }

double sqrt_newton(double number) {
  double x = number / 2.0;
  double epsilon = 1e-10;

  while (absolute(x * x - number) > epsilon) {
    x = (x + number / x) / 2.0;
  }

  return x;
}

int main() {
  double result = sqrt_newton(2.0);
  printf("sqrt(2) ≈ %.10f\n", result);
  return 0;
}
