#include <ctype.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}

int main()
{
    /*char a = mygetch(mygetch(mygetch(mygetch())));
    printf("%hhd\n", a);
    return 0;*/
    char a, b;
    int k = 0;
    do
    {
        scanf("%c", &a);
        if (isdigit(a) != 0)
            k += 1;
        b = a;
        b = mygetch();
        if (b == 27)
            b = mygetch();
        if (b == 91)
            b = mygetch();

        else
        printf("%c ", b);
    } while (b != 50);
    if (k != 0)
        printf("Number of digits - %d\n", k);
    else
        printf("There are no digits \n");
}
