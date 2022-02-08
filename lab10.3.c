#include<stdio.h>
#include<stdlib.h>


void armazenar(int *vetor1, int *vetor2, int n){

  for (int i = 0; i < n; i++){
    scanf("%d",&vetor1[i]);}
  for (int i = 0; i < n; i++){
    scanf("%d",&vetor2[i]);}
}

void soma(int *vetor1, int *vetor2, int *vsoma, int n){
  
  for (int i = 0; i < n; i++){
    vsoma[i]=vetor1[i]+vetor2[i];}
}

int main(int argc, char **argv){

  int n, *vetor1, *vetor2, *vsoma;
  scanf("%d", &n);

  vetor1=malloc(n*sizeof(int));
  vetor2=malloc(n*sizeof(int));
  vsoma=malloc(n*sizeof(int));

  armazenar(vetor1, vetor2, n);
  soma(vetor1, vetor2, vsoma, n);

  for (int i = 0; i < n; i++){
    printf("%d\n", vsoma[i]);}
  
  free(vetor1);
  free(vetor2);
  free(vsoma);

  return EXIT_SUCCESS;
}