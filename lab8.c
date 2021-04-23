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
    int k = 0;
    for (;;)
    {
        c = mygetch();
        if (isdigit(c) != 0)
            k += 1;
        printf("%c", c);
        c;
        if (c == 27)
        {
            b = mygetch();
            if (c == 91)
            {
                c = mygetch();
                if (c == 50)
                {
                    c = mygetch();
                    if (c == 51)
                    {
                        printf("\nKolichestvo chisel: %d\n", k);
                        return 0;
                    }
                }
            }
        }
    }
}
