/* Code headers */
#include <stdlib.h>
#include <stdio.h>

void print_mat(int *mat, int matf, int matc);
void fill_mat();
void extra();

void exercise1();
void exercise2();
void exercise3();
void exercise4();
void exercise5();
void exercise6();
void exercise7();

/****************/

int main(int argc, char *argv[])
{
	exercise7();
	return 0;
}

void exercise1()
{
	/*
	1) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del
		10,100,94,84,11.
	*/
	int arr[5] = {10, 100, 94, 84, 11};
}

void exercise2()
{
	/*
	2) Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego
		muéstrelo de manera inversa.
	*/
	int arr[10];
	int input;
	int i = 0;
	for (i; i < 10; i++)
	{
		system("cls");
		printf("\nIngresa el %c que corresponde a la posicion %d: ", 163, i);
		scanf("%d", &input);
		arr[i] = input;
	}
	printf("d");
	system("cls");
	int j = 10;
	for (j; j > 0; j--)
	{
		printf("\nEl entero correspondiente a la posicion %d es: %d", j - 1, arr[j - 1]);
	}
}

void exercise3()
{
	/*
	3) Cree una matriz de enteros de 3 x 3. Inicialícela en base a la siguiente tabla:
		100 74 99
		11  36 68
		23  9  81
	*/
	int mat[3][3];
	int f, c;
	for (f = 0; f < 3; f++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("\nIngrese el n%cmero de la fila %d y la columna %d: ", 163, f + 1, c + 1);
			scanf("%d", &mat[f][c]);
		}
	}

	// Muestro la matriz
	for (f = 0; f < 3; f++)
	{ // recorro fila i
		for (c = 0; c < 3; c++)
		{ // recorro columna j
			printf(" %d ", mat[f][c]);
		}
		printf("\n");
	}
}

void exercise4()
{
	/*
	4) Cree un array de char y escriba la palabra “Bienvenidos”. Responda la siguiente pregunta:
		a. ¿De cuantas posiciones deberá ser el vector?
	*/
	char arr[11] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', 's'};
	printf("El vector es de 10 posiciones y 11 elementos");
}

void exercise5()
{
	/*
	5) Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado
		en pantalla. Responda:
		a. ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos
			de repetición?
		b. Implemente la misma solución con ciclos de repetición, y responda ¿Cuántas
			líneas de código necesito en esta segunda versión
	*/
	int arr[10];
	int input;
	int i = 0;
	// Populate array
	for (i; i < 10; i++)
	{
		system("cls");
		printf("\nIngresa el entero que corresponde a la posicion N%c %d: ", 167, i);
		scanf("%d", &input);
		arr[i] = input;
	}
	// Summ all elements
	int acc = 0;
	int j = 0;
	for (j; j < 10; j++)
	{
		acc += arr[j];
	}
	printf("La suma total es: %d", acc);
}

void exercise6()
{
	/*
	6) Desarrolle un programa que almacene en un vector el número de días que tiene cada mes
		(supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero,
		12=diciembre) y muestre en pantalla el número de días que tiene ese mes
	*/
	int input;

	int arr[12] = {
			31, 28, 31, 30, 31, 30,
			31, 31, 30, 31, 30, 31};

	printf("Inserte el indice mes: ");
	scanf("%d", &input);
	printf("El mes N%c%d tiene %d dias", 167, input, arr[input - 1]);
}

void exercise7()
{
	/*
	7) Desarrolle un programa que pida al usuario los datos de dos matrices de 2x2, y calcule y
		muestre su producto. Investigue como obtener el producto de dos matrices
	*/
	int mat_a[2][2];
	// int mat_b[2][2];

	int f, c;
	printf("Llena los datos de la matriz %p\n", mat_a);
	fill_mat(&mat_a[0][0], 2, 2);
	// for (f = 0; f < 2; f++)
	// {
	// 	for (c = 0; c < 2; c++)
	// 	{
	// 		printf("Ingrese el n%cmero de la fila %d y la columna %d: ", 163, f + 1, c + 1);
	// 		scanf("%d", &mat_a[f][c]);
	// 	}
	// }
	printf("\n");
	print_mat(&mat_a[0][0], 2, 2);
	// system("cls");
	// printf("Matriz B");
	// for(f=0; f < 2; f++){
	// 	for(c=0; c < 2; c++){
	// 		printf("\nIngrese el n%cmero de la fila %d y la columna %d: ", 163, f+1, c+1);
	// 		scanf("%d", &mat_b[f][c]);
	// 	}
	// }
}

// todo's
void print_mat(int *mat, int matf, int matc)
{
	int f, c;
	printf("Mat in %p:\n", mat);

	for (f = 0; f < matf; f++)
	{

		for (c = 0; c < matc; c++)
		{
			printf("\t%d\t", *(mat + f * matc + c));
		}
		printf("\n");
	}
}

void fill_mat(int *mat, int matf, int matc)
{
	int f, c;
	for (f = 0; f < matf; f++) {
		for (c = 0; c < matc; c++) {
			printf("Ingrese el n%cmero de la fila %d y la columna %d: ", 163, matf + 1, matc + 1);
			scanf("%d", (*mat + f * matc + c));
		}
	}
}

void extra()
{
	/*
		Popular con inputs del usuario una matriz de 5x3
	*/
	int mat[5][3];
	int f, c;

	// Completo la matriz
	for (f = 0; f < 5; f++)
	{ // recorro fila i
		for (c = 0; c < 3; c++)
		{ // recorro columna j
			printf("\nIngrese el numero de la fila %d en la columa %d: ", f + 1, c + 1);
			scanf("%d", &mat[f][c]);
		}
	}

	/*
		Popular con inputs del usuario una matriz de 5x3
	*/
	// Muestro la matriz
	for (f = 0; f < 5; f++)
	{ // recorro fila i
		for (c = 0; c < 3; c++)
		{ // recorro columna j
			printf(" %d ", mat[f][c]);
		}
		printf("\n");
	}
}