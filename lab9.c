#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    ;
    char str[256], *new[256];
    scanf("%255[^\n]", &str);
    char delim[] = " , ";
    char *p = strtok(str, delim);
    len = strlen(p);
    *new[0] = p[0];
    for (int i = 1; i < len; i++)
    {
        if (p[i] != p[0])
        {
            new[i] = strcat(*new , p);
        }
    }
    printf(*new);
    while (p = strtok(NULL, delim))
    {
        len = strlen(p);
        *new[0] = p[0];
        for (int i = 1; i < len; i++)
        {
            if (p[i] != p[0])
            {
                new[i] = strcat(*new , p);
            }
        }
        printf(" %s", *new);
    }
    printf("\n");
    return 0;
}
