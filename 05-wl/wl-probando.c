#include <stdio.h>

#define IN 1  // En una palabra
#define OUT 0 // Fuera de una palabra

main()
{

    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (state == IN)
        {
            if (c == ' ')
            {
                printf("\n");
                state = OUT;
            }
            else
            {
                printf("%c", c);
            }
        }

        if (state == OUT)
        {
            if (c == ' ')
            {
            }
            else
            {
                printf("%c", c);
                state = IN;
            }
        }
    }
}

//(c != ' ') || (c != '\n') || (c != '\t')