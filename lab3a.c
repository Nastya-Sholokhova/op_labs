#include <stdio.h>
#include <math.h>
int koren(float a)
{
    float b;
    if (a > 0)
        b = pow(a, (float)1 / 3);
    else
        b = -pow(a, (float)1 / 3);
    return b;
}

int main()
{
    float x = -2, f, h, n;
    int i;
    printf("Введите шаг h ");
    scanf("%f", &h);
    printf("x  f(x) \n");
    printf("---------------------------— \n");
    n = (3 / h) + 1;
    for (i = 1; i <= n; i++)
    {
        if ((-2 <= x) && (x <= 0))
            f = x * x * sin(koren(x) - 3);
        else
            f = sqrt(x) * cos(2 * x);
        printf("%f   %f\n",x,f);
        x = -2 + i * h;
    }
}
