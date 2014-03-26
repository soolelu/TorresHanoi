#include<stdio.h>
int hanoi(int n)
{
    if(n==1)
        return 1;
    else
        return 2 * hanoi(n-1) + 1;
}
int main()
{
    int cantDiscos, mov;
    printf("--TORRES DE HANOI-- \n");
    printf("Numero de discos: ");scanf("%i",&cantDiscos);
    printf("\tMovimientos necesarios: %i\n", hanoi(cantDiscos));
    return 0;
}
