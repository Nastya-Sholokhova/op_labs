#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, inew[256], j = 0, k = 0, t = 0;
    char str[256], new[256];
    scanf("%255[^\n]", &str);
    char delim[] = " , ";
    char *p = strtok(str, delim);
    len = strlen(p);

    for (i = 0; i < 256; i++)
        inew[i] = 0;

    for (i = 0; i < len; i++)
    {
        if (p[0] == p[i])
        {
            inew[j] = i;
            j++;
        }
    }

    while (p = strtok(NULL, delim))
    {
        len = strlen(p);
        new[0] = p[0];
        for (i = 1; i < len; i++)
        {
            if (p[0] == p[i])
            {
                inew[j] = i;
                j++;
            }
        }
    }

    j = 0;

    for (i = 0; i < strlen(str); i++)
        if (str[i] == ' ')
            k += 1;
    for (i = 0; i < (k + 1); i++)
    {
        do
        {
            if (t != inew[j])
                new[t] = str[t];
            t++;
            j++;
        } while (str[t] != ' ');
        j = 0;
    }

    printf("Chisla povtor: ");

    for (i = 0; i < 256; i++)
        if (inew[i] != 0)
            printf("%d ", inew[i]);
    printf("\n");
    for (i = 0; i < strlen(new); i++)
        printf("%s ", new);
    printf(" ");
    printf("\n");
    return 0;
}
