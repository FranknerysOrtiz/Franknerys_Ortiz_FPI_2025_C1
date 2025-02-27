#include <stdio.h>
#include <stdlib.h>

void f1 (void);
int K = 5;

void main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
    f1();

}
void f1 (void)
{
    int global_K =2;
    global_K += K;
    printf("\nEl valor de la variable local es: %d", K);
    global_K = global_K + K;
    printf("\nEl valor de la variable global es: %d", global_K);
}
