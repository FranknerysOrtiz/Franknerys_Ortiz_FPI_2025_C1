#include <stdio.h>
#include <ctype.h>

void main (void)
{
    char p, cad[50];
    int n;
    printf("\ningrese la cadena de carecteres (maximo 50): ");
    gets (cad);
    printf("\nIngrese la posicion en la cadena que desea verificar: ");
    if((n >= 0) && (n < 50))
    {
        p = cad[n-1];
        if(islower(p))
            printf("\n%c es una letra minuscula", p);
        else
            printf("\n%c no es una letra minuscula", p);
    }
    else
        printf("\nEl valor ingresado de n es incorrecto");
}
