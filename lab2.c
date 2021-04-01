#include <math.h>
#include <stdio.h>

int main ()
{
  float z,y,x;
  printf("Введите 1<=x<=10 ");
  scanf("%f", &x);
  if ((1 <= x) && (x <= 10))
  {
      y = asin(log10(x));
      z = (y + fabs(y)) * sqrt(y * (sin(M_PI * y)) * (sin(M_PI * y)));
  }
  else
  {
      printf("Выражение не имеет смысла \n");
  }
  printf("y(x)=%f\n", y);
  printf("z(y)=%f\n", z);
}
