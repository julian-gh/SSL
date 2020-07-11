#include <stdio.h>

enum states
{
    IN,
    OUT
};

typedef enum states state;

int main(void)
{
}

printWordsInLines(const char *s)
{
    state state = OUT;
    int c;
    int i = 0;

    while ((c = s[i]) != EOF)
    {
        i++;
        switch (c)
        {
        case ' ':
        case '\n':
        case '\t':
        case ',':
        case ';':
        case '.':
        {
            if (state == IN)
            {
                state = OUT;
                putchar('\n');
            }
            break;
        }
        default:
            state = IN;
            putchar(c);
            break;
        }
    }
}