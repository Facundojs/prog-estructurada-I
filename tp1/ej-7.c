// Ingresar dos valores
// Calcular su suma, su producto y la diferencia entre el primero y el segundo
// Imprimir los resultados por pantalla
#include<stdio.h>

int val1;
int val2;

int sum;
int prod;
int diff;

int main() {

  printf("\nIngrese el primer valor: ");
  scanf("%d", &val1);
  printf("\nIngrese el segundo valor: ");
  scanf("%d", &val2);

  sum = (val1 + val2);
  printf("\nLa suma de ambos de numeros es: %d \n", sum);

  prod = (val1 * val2);
  printf("\nEl producto de ambos de numeros es: %d \n", prod);

  diff = (val1 - val2);
  printf("\nLa diferencia de ambos de numeros es: %d \n", diff);

  return 0;
}