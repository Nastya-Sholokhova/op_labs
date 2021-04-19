#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fill(int n, int a[][n])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 101 - 50;
}

void pr(int n, int a[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
}

void swap(int n, int a[][n])
{
    int t;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
            {
                t = a[i][j];
                a[i][j] = a[i][n - i];
                a[i][n - i] = t;
            }
}

int main()
{
    int n;
    printf("Vvedite n-> ");
    scanf("%d", &n);
    printf("\n");

    int a[n][n];
    fill(n, a);
    printf("Nach massiv: ");
    printf("\n");
    pr(n, a);

    swap(n, a);
    printf("Konech massiv: ");
    printf("\n");
    pr(n, a);
}
