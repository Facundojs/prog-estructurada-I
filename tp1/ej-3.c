// Ingresar tres valores e imprimir la suma total..
#include<stdio.h>
int val1;
int val2;
int val3;
int sum;

int main(){
  printf("Ingrese el primer valor: ");
  scanf("%d", &val1);
  printf("\nIngrese el segundo valor: ");
  scanf("%d", &val2);
  printf("\nIngrese el tercer valor: ");
  scanf("%d", &val3);

  sum = val1 + val2 + val3;

  printf("\nLa suma total es: %d \n", sum);
  return 0;
}