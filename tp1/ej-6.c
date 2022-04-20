// Ingresar los lados de un rectángulo
// Calcular su diagonal principal, superficie y perímetro
// Imprimir los resultados por pantalla
#include<stdio.h>
#include<math.h>

int sidea;
int sideb;

double hypotenuse;
int perimeter;
int area;

int main(){

  printf("\nIngrese el primer lado del rectángulo: ");
  scanf("%d", &sidea);
  printf("\nIngrese el segundo lado del rectángulo: ");
  scanf("%d", &sideb);

  hypotenuse = sqrt(
    (sidea * sidea) + (sideb + sideb)
  );
  printf("\nLa diagonal principal es: %lf \n", hypotenuse);

  area = (sidea * sideb);
  printf("\nEl area de tu rectangulo es: %d \n", area);

  perimeter = (sidea * 2) + (sideb * 2);
  printf("\nEl perimetro de tu rectangulo es: %d \n", perimeter);

  return 0;
}