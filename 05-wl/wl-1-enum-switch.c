#include <stdio.h>

enum states
{
    IN,
    OUT
};

typedef enum states state;

int main(void)
{
    state s = OUT;
    int c;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case ' ':
        case '\n':
        case '\t':
        case ',':
        case ';':
        case '.':
        {
            if (s == IN)
            {
                s = OUT;
                putchar('\n');
            }
            break;
        }
        default:
            s = IN;
            putchar(c);
            break;
        }
    }
}