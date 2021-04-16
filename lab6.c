#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fill (int n ,float a[])
 {
   int i ;
   for (i = 0; i < n ; i ++)
      a[i] = rand ()%101 - 50;
 }

 float izm(float x, float y, float z, int i)
 {
   if (fabs(fabs(x) - fabs(y)) > z && i % 2 == 0)
    x = y + z / (i + 2);
   if (fabs(fabs(x) - fabs(y)) > z && i % 2 != 0)
    x = y - z / (i + 2);
   return x;

 }

 int main ()
 {
   int n;
   printf("Vvedite n -> ");
   scanf ("%d", &n);
   printf("\n");
   fill(n, a); //заполнили массив

   float srzn, s = 0, e, a[n];
   printf("Nach massiv ");
   for (int i = 0; i < n; i++)
   {
     s += a[i]; //посчитали сумму элементов массива
     printf(" %f ", a[i]);
   }
    printf("\n");
    printf("Vvedite tocnost e-> ");
    scanf ("%f", &e);

    srzn = s / 10.0;
    printf("Srednee znachenie = %f", srzn);
    printf("\n");
    printf("Konech massiv ");
    for (int i = 0; i < n; i++)
    {
      if (fabs(fabs(a[i]) - fabs(srzn)) > e && i % 2 == 0)
        a[i] = srzn + e/(i + 2);
      if (fabs(fabs(a[i]) - fabs(srzn)) > e && i % 2 != 0)
        a[i] = srzn - e/(i + 2);
      printf(" %f ", a[i]);
    }
    printf("\n");
}
