// Ingresar dos valores enteros, sumarlos e imprimirlos por consola.
#include <stdio.h>

int val1;
int val2;
int result;

int main(){
  printf("Ingresa tu primer numero: ");
  scanf("%d",& val1);
  printf("\nIngrese un segundo numer: ");
  scanf("%d",& val2);
  result = val1 + val2;
  printf("\nEl resultado de la suma es: %c", result);
  return 0;
}