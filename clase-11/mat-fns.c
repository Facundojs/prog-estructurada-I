#include <stdio.h>
#include <stdlib.h>
/*MENU*/
int Menu(){
  system("cls");
  int opcion;
  printf("***************** MENU de MATRICES ***********************\n\n");
  printf("1 - Ingreso de Matriz \n");
  printf("2 - Impresion de Matriz \n");
  printf("3 - Salir \n\n");
  printf(" Elija una opcion :");
  scanf("%d",&opcion);
  return opcion;
}

void ImprimeMatriz(int *p, int fi, int co){
  int f,c;
  for(f=0;f<fi;f++){      //Recorro la fila
    for(c=0;c<co;c++){    //Recorro la columna
      printf("%d \t",*(p+f*co+c));
    }
    printf("\n");
  }
}

/*Ejemplo de Matriz*/
int main(int argc, char *argv[]) {
  /*Declaracion de Matriz*/
  int Matriz[5][3];
  int opc,f,c;
  opc=Menu();
  while (opc!=3){
    if (opc==1){
      /*Completar la matriz*/
      for(f=0;f<=4;f++){    //Recorro la fila
        for(c=0;c<=2;c++){  //Recorro la columna
          printf("Ingrese el dato para la fila %d y columna %d :",f+1, c+1);
          scanf("%d",&Matriz[f][c]);
        }
      }
      system("pause");
    }
    if (opc==2){
      system("cls");
      /*Imprimir como una Matriz*/
      ImprimeMatriz(&Matriz[0][0],5,3);
      system("pause");
    }
    opc=Menu();
  }
  return 0;
}
