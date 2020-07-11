#include <stdio.h>

int main(void)
{

    int c;

    // Vamos a tratar los gotos como los JMP incondicionales que
    // encontrariamos en ASM, de modo que podemos modelar el
    // el ciclo y los condicionales de la misma forma.

MainLoop:
    if ((c = getchar()) != EOF)
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
            goto OUT;
            break;
        }
        default:
        {
            goto IN;
            break;
        }
        }
    }

OUT:
    puchar('\n');
    goto MainLoop;
IN:
    putchar(c);
    goto MainLoop;
}