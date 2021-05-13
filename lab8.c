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
    unsigned char c, b;
    int k = 0, n = 0;
    for (;;)
    {
        c = mygetch();
        if (48 <= c && c <= 57 && c != 27)
        {
            k += 1;
            printf("%c", c);
        }
        if (isalpha(c) != 0)
            printf("%c", c);
        b = c;
        if (b == 27)
        {
            b = mygetch();
            if (b == 91)
            {
                b = mygetch();
                if (b == 50)
                {
                    b = mygetch();
                    if (b == 51)
                    {
                        printf("  Kolichestvo chisel: %d\n", k - n);
                        return 0;
                    }
                }
                else if (b == 49)
                    n += 1;
            }
        }
    }
}
