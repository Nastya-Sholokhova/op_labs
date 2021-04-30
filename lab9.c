#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], d[2] = " ";

    int i = 1;
    scanf("%[^\n]", &str);
    char *p = strtok(str, d);
    do
    {
        if (p[0] != p[i])
          printf("%c", p);
    } while (p = strtok(NULL, d));
    printf("\n");
}
