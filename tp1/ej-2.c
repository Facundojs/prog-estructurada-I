// Ingresar tres valores e imprimir la suma total, sumando de a dos valores.
#include<stdio.h>
int val1;
int val2;
int val3;
int sum_v1_v2;
int sum_rv12_v3;

int main(){
  printf("Ingrese el primer valor: ");
  scanf("%d", &val1);
  printf("\n");
  printf("Ingrese el segundo valor: ");
  scanf("%d", &val2);
  printf("\n");
  printf("Ingrese el tercer valor: ");
  scanf("%d", &val3);
  printf("\n");

  sum_v1_v2 = val1 + val2;
  sum_rv12_v3 = sum_v1_v2 + val3;

  printf("\nLa suma total es: %d \n", sum_rv12_v3);
  return 0;
}