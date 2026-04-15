#include <stdio.h>

void main()
{
    char elementos[256];

    for (int i = 0; i < 256; i++)
    {
        elementos[i] = (char) i;
    }

    for (int i = 0; i < 256; i++)
    {
        printf("%d\n", (unsigned char) elementos[i]);
    }

    printf("Criado por Marcelo Mendes");
}