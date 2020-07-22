#include <stdio.h>


int main(void) {
  int i, j, linha =3, coluna =3;
  int matrix_coordenativas[3][3] = {1, 2, 3,
                                    4, 5, 6, 
                                    7, 8, 9};

  int matrix_subordinativas[4][3] = {1,2,3,4,5,6,7,8,9,10};

   printf(" \n matriz 1 \n");

  for(i = 0; i < linha; i++) {
    for(j = 0; j < coluna; j++ ) { 
      //printf("%d \n", matrix_coordenativas[i][j]);
      if(matrix_coordenativas[i][j] == 1) {
        printf("aditivas \n");
      }
      else if(matrix_coordenativas[i][j] == 2) {
        printf("adversativas \n");
      }
      else if(matrix_coordenativas[i][j] == 3){
        printf("alternativas \n");
      }
      else if(matrix_coordenativas[i][j] == 4) {
        printf("explicativas \n");
      }
      else if(matrix_coordenativas[i][j] == 5){
        printf("conclusivas \n");
      }
    }
  }

  printf(" \n ============================= \n");

  /* new matrix */

   printf(" \n matriz 2 \n");

  for(i = 0; i < linha; i++) {
    for(j = 0; j < coluna; j++ ) { 
      //printf("%d \n", matrix_subordinativas[i][j]);
      if(matrix_subordinativas[i][j] == 1) {
        printf("causais \n");
      }
      else if(matrix_subordinativas[i][j] == 2) {
        printf("concessivas \n");
      }
      else if(matrix_subordinativas[i][j] == 3){
        printf("condicionais \n");
      }
      else if(matrix_subordinativas[i][j] == 4) {
        printf("finais \n");
      }
      else if(matrix_subordinativas[i][j] == 5){
        printf("temporais \n");
      }
      else if(matrix_subordinativas[i][j] == 6){
        printf("consecutivas \n");
      }
      else if(matrix_subordinativas[i][j] == 7){
        printf("comparativas \n");
      }
      else if(matrix_subordinativas[i][j] == 8){
        printf("integrantes \n");
      }
      else if(matrix_subordinativas[i][j] == 9){
      printf("conformativas \n");
      }
      else if(matrix_subordinativas[i][j] == 10){
      printf("proporcionais \n");
      }
    }
  }
                              
  return 0;
}