#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[255];
    char new[255];

    scanf("%[^\n]", str);

    char *p = strtok(str, " ,./!?");
    int j = 0;
    new[j] = p[0];
    j++;
    for (int i = 1; p[i]; i++)
    {
        if (p[i] != p[0])
        {
            new[j] = p[i];
            j++;
        }
    }
    while ((p = strtok(NULL, " ,./!?")))
    {
        new[j] = ' ';
        j++;
        new[j] = p[0];
        j++;
        for (int i = 1; p[i]; i++)
        {
            if (p[i] != p[0])
            {
                new[j] = p[i];
                j++;
            }
        }
    }
    new[j] = '\0';
    printf("\n");
    for (int t = 0; new[t]; t++)
        printf("%c", new[t]);
    printf("\n");
    return 0;
}
