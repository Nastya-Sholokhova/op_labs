#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "asdasd       as";
    char str1[256];
    int i, j = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            str1[j] = str[i];
            j++;
        }
    }
    printf("%s", str1);
    printf("\n");
}
