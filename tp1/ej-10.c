// Una consecionaria de autos desea liquidiar el sueldo a cada vendedor
// Paga 500 x mes
// Más plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 sobre c/uno
// Ingresa el valor de ese vehículo y a cantidad de ese tipo vendidos
// Calcular su sueldo e imprimir los resultados;
#include<stdio.h>

int const_per_sell = 10;
int base_salary = 500;

int vehicle_price;
int sells;

int salary;

int main(){

  printf("\nIngrese el precio del vehiculo: ");
  scanf("%d", &vehicle_price);
  printf("\nIngrese la cantidad de vehiculos vendidos: ");
  scanf("%d", &sells);

  salary = ((vehicle_price / 10) * sells) + (const_per_sell * sells) + base_salary;
  printf("\nEl salario total es de: %d ", salary);
  return 0;
}