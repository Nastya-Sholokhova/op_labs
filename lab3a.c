#include <stdio.h>
#include <math.h>

int main() {
  float x = -2, f, h;
  int i, n;
  printf("Введите шаг h ");
  scanf("%f", &h);
  printf("x       f(x) \n");
  printf("---------------------------— \n");
  n = 3 / h;
  for (i = 1; i <= n; i++)
  {
      if ((-2 <= x) && (x <= 0))
        f = x * x * sin(pow(x, 1/3) - 3);
      else
        f = sqrt(x) * cos(2 * x);
      printf("x=%f f(x)= %f\n", x,f);
      x += -2 + i * h;
  }
}
