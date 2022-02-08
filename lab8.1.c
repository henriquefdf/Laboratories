#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


void media(double vet[], int n, int*i){

double soma=0;

    for(int j=0; j<n; j++){
        soma+=vet[j]; 
    }
soma=soma/n;
double aux;
aux=soma;
    for(int j=0; j<n; j++){
       if(fabs(soma-vet[j])<aux){
           aux=(fabs(soma-vet[j]));
           *i=j;     
       }

    }
printf("%d\n", *i );
}


int main(){
int n, i;

scanf("%d", &n);
double vet[n];

    for(int i=0; i<n; i++){
        scanf("%lf", &vet[i]);
    }

media(vet, n, &i);

return EXIT_SUCCESS;
}
