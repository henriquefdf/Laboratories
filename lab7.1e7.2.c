#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv){

    char c;
    int soma=0;
    char nom[50];
    
    fgets(nom, 50, stdin);
    nom[strlen(nom)-1]='\0';

    FILE *fp;
    fp=fopen(nom, "r");

    if (fp==NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return EXIT_FAILURE;
    }

    while((c = fgetc(fp)) != EOF){
    if(c=='a')
    soma++;
    }
printf("%d\n", soma);
fclose(fp);
return EXIT_SUCCESS;
}
