#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n1, int n2, int a[][n2])
{
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
            a[i][j] = rand() % 101 - 50;
}

void pr(int n1, int n2, int a[][n2])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
}

void swap(int n1, int n2, int a[][n2])
{
    int t;
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < n2; j++)
        {
            if (i == j)
            {
                t = a[i][j];
                a[i][j] = a[i][n2 - 1 - i];
                a[i][n2 - 1 - i] = t;
            }
        }
}

int main()
{
    srand(time(NULL));
    int n1, n2;
    printf("Vvedite n1-> ");
    scanf("%d", &n1);

    printf("Vvedite n2-> ");
    scanf("%d", &n2);
    printf("\n");

    int a[n1][n2];
    fill(n1, n2, a);
    printf("Nach massiv: ");
    printf("\n");
    pr(n1, n2, a);

    swap(n1, n2, a);
    printf("Konech massiv: ");
    printf("\n");
    pr(n1, n2, a);
}
