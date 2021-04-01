#include <stdio.h>
#include <math.h>

int main()
{
  float x = -2, f, h;
  printf("Введите шаг h ");
  scanf("%f\n", &h);
  printf ("x f(x) \n");
  printf ("-----------------------\n");
  do
    {
      if ((-2 <= x) && (x <= 0))
        f = x * x * sin(pow(x, 1/3) - 3);
      else
          f = sqrt(x) * cos(2 * x);
      printf("%f %f \n",x,f);
      x += h;
    }
  while (x < (x + h));

}
