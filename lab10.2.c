#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void alocacao(int **mat, int l, int c){


  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      scanf("%d", &mat[i][j]);
    }
  }
}

int main(int argc, char **argv){

    int **mat, l, c;
    scanf("%d%d", &l, &c);

    mat=malloc(l*sizeof(int *));
    for (int i=0; i<l; i++){
      mat[i] = malloc(c*sizeof(int));
    }

alocacao(mat, l, c);
  for(int i = 0; i < l; i++){
    for(int j = 0; j < c; j++){
      printf("%d ", mat[i][j]);
    }
  printf("\n");
  }
  
  free(mat);
  return EXIT_SUCCESS;
}