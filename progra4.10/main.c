#include <stdio.h>
#include <stdlib.h>

int multiplo (int, int);

void main (void)
{
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros:  ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
    if (RES)
    printf("\nEl segundo numero es multiplo del priemro");
    else
        printf("\nEl segundo numero no es multiplo del priemro");
}

int multiplo (int N1, int N2)
{
    int RES;
    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;
    return (RES);
}
