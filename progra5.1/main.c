#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int I, NUM, CUE = 0;
    int ARRE[5];
    for (I = 0; I < 5; I++)
    {
        printf("\nIngrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);
    }
    printf("\n\nIngrese el numero que se va a bucar en el arreglo:   ");
    scanf("%d", &NUM);
    for (I = 0; I <5; I++)
        if (ARRE[I]== NUM)
        CUE++;
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}
