// Ingresar los lados de un triángulo rectangulo
// Calcular hipotenusa, perímetro y superficie
// Imprimir los resultado
#include<stdio.h>
#include<math.h>

int sidea;
int sideb;

double hypotenuse;
double perimeter;
double area;

int main(){

  printf("\nIngrese la medida del lado A:");
  scanf("%d",&sidea);
  printf("\nIngrese la medida del lado B:");
  scanf("%d",&sideb);

  hypotenuse = sqrt(
    (sidea * sidea) + (sideb * sideb)
  );

  printf("\n\nLa hipotenusa es: %lf \n", hypotenuse);

  perimeter = sidea + sideb + hypotenuse;

  printf("\n\nEl perimetro es de: %lf mts cuadrados \n", perimeter);

  area = (sidea * sideb) / 2;

  printf("\n\nEl área son: %lf mts cuadrados\n", area);

  return 0;
}