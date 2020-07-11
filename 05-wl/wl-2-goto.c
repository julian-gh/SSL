#include <stdio.h>

int main(void)
{

    const char str = "asd asd asd asd asd";

    printWordsInLines(str);
}

printWordsInLines(const char *s)
{
    int c;
    int i = 0;
    goto OUT;

OUT:
    c = s[i];
    if (c != EOF)
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
            goto OUT;
            break;
        }
        default:
        {
            putchar(c);
            goto IN;
            break;
        }
        }
    }

IN:
    c = s[i];
    if (c != EOF)
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
            putchar('\n');
            goto OUT;
            break;
        }
        default:
        {
            putchar(c);
            goto IN;
            break;
        }
        }
    }
}
