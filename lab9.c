#include <stdio.h>
#include <string.h>

int memory(int len, char *p, int *inew, int j)
{
    for (int i = 0; i < len; i++)
    {
        if (i != 0 && p[0] == p[i])
        {
            inew[j] = i;
            j++;
        }
    }
    return j;
}

int main()
{
    int i, len, t = 0, j = 0, q = 0, l = 0;
    char str[256], new[256], strnew[256];
    scanf("%[^\n]", &str);
    for (i = 0; i < strlen(str); i++)
        strnew[i] = str[i];

    char delim[] = "  , ";
    char *p = strtok(str, delim);
    int inew[strlen(strnew)];

    len = strlen(p);
    for (i = 0; i < strlen(strnew); i++)
        inew[i] = 0;
    j = memory(len, p, inew, j);

    while (p = strtok(NULL, delim))
    {
        len = strlen(p);
        j = memory(len, p, inew, j);
    }

    for (i = 0; i < (j - 1); i++)
    {
        q = 0;
        while (strnew[i] != ' ')
        {
          if (q == inew[j])
          {
            new[t] = strnew[i];
            t++;
            l++;
          }
          q++;
        }
    }

    for (i = 0; i < (strlen(strnew) - 1); i++)
        printf("%d", inew[i]);
    printf("\n");
    printf("%s", new);
    printf("\n");
    return 0;
}
