#include <stdio.h>
#include <string.h>

int main()
{
    int len, inew[256], j = 0;
    char str[256], new[256];
    scanf("%255[^\n]", &str);
    char delim[] = " , ";
    char *p = strtok(str, delim);
    len = strlen(p);
    for (int i = 1; i < len; i++)
    {
        if (p[0] == p[i])
        {
          inew[j] = i;
          j++;
        }
    }
    printf(*new);
    while (p = strtok(NULL, delim))
    {
        len = strlen(p);
        for (int i = 1; i < len; i++)
        {
            if (p[0] == p[i])
            {
                inew[j] = i;
                j++;
            }
        }
    }
    for (i = 0; i < 256; i++)
    {
        printf("%d ", inew[i]);
    }
    printf("\n");
    return 0;
}
