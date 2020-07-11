#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    const char str = "asd asd asd asd asd";

    out(str);
}

void in(const char *s)
{
    int c = s[0];

    if (c != EOF)
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
            putchar('\n');
            out(s + 1);
            break;
        }
        default:
        {
            putchar(c);
            in(s + 1);
            break;
        }
        }
    }
}

void out(const char *s)
{
    int c = s[0];

    if (c != EOF)
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
            out(s + 1);
            break;
        }
        default:
        {
            putchar(c);
            in(s + 1);
            break;
        }
        }
    }
}
