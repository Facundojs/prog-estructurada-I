#include <stdio.h>
#include <stdlib.h>
void PrintMatrix(int *mat, int matf, int matc);
void InitMatrix(int *mat, int matf, int matc);
void App(int *aux, int *vv, int *p, int *t);
void InitArray(int *arr, int size);
void GetSellData(int *vv, int *p, int *t);

int main(int argc, char *argv[])
{
  int total = 0, menuAux = 0, initAux = 0, v = 0;
	int ventasVendedores[10];
  int productos[5][2];

  printf("Preparando env...");
  InitArray(&ventasVendedores, 10);
  InitMatrix(&productos[0][0], 5, 2);

  do{
    App(&menuAux, &ventasVendedores, &productos, &total);
  } while (menuAux != 0);
  PrintMatrix(&productos[0][0], 5, 2);
  for (v; v < 10; v++) {
    printf("\n\tVendedor %d vendio %d productos.", v+1, ventasVendedores[v]);
  }
  printf("\n=======================================");
  printf("\nTotal: %d\n", total);
  return 0;
}

void InitMatrix(int *mat, int matf, int matc)
{
	int f, c;
	printf("Mat in %p:\n", mat);

	for (f = 0; f < matf; f++)
	{

		for (c = 0; c < matc; c++)
		{
      *(mat + f * matc + c) = 0;
    }
	}
}

void PrintMatrix(int *mat, int matf, int matc)
{
	int f, c;
	printf("Final balance:\n\n");
  printf("\tTotal ventas\tTotal monto ventas\n");
  for (f = 0; f < matf; f++)
  {

		for (c = 0; c < matc; c++)
		{
			printf("\t    %d\t", *(mat + f * matc + c));
		}
		printf("\n");
	}
}

void InitArray(int *arr, int size) {
  int i;
  for (i = 0; i < size; i++) {
    arr[i] = 0;
  }
}

void App(int *aux, int *vv, int *p, int *t) {
  printf("\nSeleccion una opcion:\n\t1- Cargar nueva venta.\n\t0- Terminar.\n\nSeleccion: ");
	scanf("%d", aux);

	switch(*aux) {
		case 1: {
      fflush(stdin);
      GetSellData(vv, p, t);
      break;
		};
		case 0: {
			printf("Terminando...");
			break;
		};
		default: printf("\nEsta opcion no esta contemplada!");
	}
}

void GetSellData(int *vv, int *p, int *t) {
  int auxNp, auxMp, auxV;

  printf("\nIngresa el numero de producto: ");
  scanf("%d", &auxNp);

  printf("\nIngresa el monto vendido: ");
  scanf("%d", &auxMp);

  printf("\nIngresa el vendedor: ");
  scanf("%d", &auxV);


  vv[auxV-1] += 1;
  *t += auxMp;
  *(p + 2 * (auxNp - 1) + 0) += 1;
  *(p + 2 * (auxNp - 1) + 1) += auxMp;
  // *(p + 1 * 0 + auxNp - 1) += 1;
  // *(p + 1 * 1 + auxNp ) += auxMp;

  printf("\nproducto %d\nMonto %d\nvendedor %d", auxNp, auxMp, auxV);
  printf("\n\n\n\n");
}
