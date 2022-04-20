// Ingrese el valor de la hora y el tiempo trabajado por un operario
// Calcule su sueldo e imprimalo
#include<stdio.h>

float salary_per_hour;
float hours_worked;

float salary;

int main()
{
  printf("Ingrese el valor de la hora: \n");
  scanf("%f", &salary_per_hour);
  printf("Ingrese el tiempo trabajador: \n");
  scanf("%f", &hours_worked);

  salary = hours_worked * salary_per_hour;
  printf("El salario total es de: $%f\n", salary);

  return 0;
}