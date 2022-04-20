// Ingrese el tiempo trabajado por un operario
// Calcule su sueldo considerando que cobra 10xHora
// Imprima los resultados

#include<stdio.h>

int salary_per_hour = 10;
float hours_worked;

float salary;

int main()
{
  printf("Ingrese el tiempo trabajador: \n");
  scanf("%f", &hours_worked);

  salary = hours_worked * salary_per_hour;
  printf("El salario total es de: $%f\n", salary);

  return 0;
}