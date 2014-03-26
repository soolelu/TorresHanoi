#include <stdio.h>
#include <stdlib.h>   
 
#define inicio 1
#define auxiliar 2
#define final 3
 
int hanoi(int numDiscos, int A, int B, int C);
int main()
{
    int cantDiscos, movimientos;
printf("--TORRES DE HANOI-- \n");
 printf("Cantidad de discos a mover: ");
 scanf("%d", &cantDiscos);
 movimientos = hanoi(cantDiscos, inicio, auxiliar, final);
 printf("\nMovimientos necesarios: %d movimientos\n", movimientos);
 return 0;
}
int hanoi(int numDiscos, int A, int B, int C)
{
       static int movimientos = 0;
 if(numDiscos == 1) // solo hay un disco
 {
  printf("%d)Mover el disco superior de la torre %d a la torre %d\n", movimientos+1, A, C);
  movimientos++;
}
else{
hanoi(numDiscos - 1, A, C, B);
  printf("%d)Mover el disco superior de la torre %d a la torre %d\n", movimientos+1, A, C);
  movimientos++;
  hanoi(numDiscos - 1, B, A, C);
}
 return movimientos;
}
