#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void armazenar(int *vetor, int n){

  for (int i = 0; i < n; i++){
    scanf("%d",&vetor[i]);
  }
}

int main(int argc, char **argv){

    int n, *vetor;
    scanf("%d", &n);

    vetor=malloc(n*sizeof(int));

  armazenar(vetor, n);

    for (int i = 0; i < n; i++){
      printf("%d\n",vetor[i]);
    }
  
  free(vetor);
  return EXIT_SUCCESS;
}