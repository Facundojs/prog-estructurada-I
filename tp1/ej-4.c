// Ingresar los lados de un triángulo, calcular su perímetro e imprimirlo.
#include<stdio.h>

int side1;
int side2;
int side3;
int perimeter;

int main(){

  printf("Ingrese el primer lado del triangulo: ");
  scanf("%d",& side1);
  printf("\nIngrese el segundo lado del triangulo: ");
  scanf("%d",& side2);
  printf("\nIngrese el tercer lado del triangulo: ");
  scanf("%d",& side3);

  perimeter = side1 + side2 + side3;

  printf("\n El perimetro de tu triangulo es: %d", perimeter);

  return 0;
}