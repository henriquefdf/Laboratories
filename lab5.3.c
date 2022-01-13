#include<stdio.h>
#include<string.h>

typedef struct
{
    char nome[50];
    char marca[50];
    float preco;
}produto_t;


int main (){
produto_t produtos[8];
int i=0;
float soma=0;

//número de marcas distintas
int munica=1;
for (int i=0; i<7; i++);{

    int achou=0;
    //for (int k = i-1; k>=0; k--){

        //verificar se a marca já existia
    }

    //PREÇO MÉDIO
    i=0;
    for (int i=0; i<7; i++){
    soma+=produtos[i].preco;
    }
    float medtotal=soma/8;
    printf("media total %.2f\n", medtotal);

    //MÉDIA POR MARCA
    

}