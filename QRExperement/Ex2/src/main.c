#include <math.h>
#include <stdio.h>

int main() {
  double r = 0;
  double result = 0.0;
  if (scanf("%lf", &r) == 1 && r > 0) {
    double V = (4.0 / 3.0) * M_PI * pow(r, 3);
    result = round(21500.0 * V);
    printf("%.0lf", result);
  } else {
    printf("n/a");
  }
}