#include <stdio.h>
#include <string.h>

void main (void)
{
    char cad1[50], cad2[50], *cad0 = "";
    int i = 0;

    printf("\nIngrese la  primera caadena  de caracteres: ");
    gets(cad1);
    printf("\nIngrese la cadena  a buscar:  ");
    gets(cad2);
    strcpy(cad0, cad1);
    cad0 = strstr (cad0, cad2);
    while (cad0 != NULL)
    {
        i++;
    }
    printf("\nEl numeri=o de veces que aparece la segunda cadena: %d",i);

}
