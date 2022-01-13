#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){


char nom[50];


    fgets(nom, 50, stdin);
    nom[strlen(nom)-1]='\0';

    FILE *fp;
    fp=fopen(nom, "rb");

long int mat1[5][5];
long int mat2[5][5];



    if (fp==NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return EXIT_FAILURE;
    }
    

    for(int i=0; i<=4; i++){
        fscanf(fp, "%ld %ld %ld %ld %ld", &mat1[i][0], &mat1[i][1], &mat1[i][2], &mat1[i][3], &mat1[i][4]);
    }

    
     for(int i=0; i<=4; i++){
        fscanf(fp, "%ld %ld %ld %ld %ld", &mat2[i][0], &mat2[i][1], &mat2[i][2], &mat2[i][3], &mat2[i][4]);
    }

    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
        printf("%ld ", (mat1[i][j]+mat2[i][j]));
        }
    printf("\n");
    }


    

    
    
    return EXIT_SUCCESS;
}
