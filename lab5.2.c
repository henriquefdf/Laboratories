#include<stdio.h>
#include<string.h>



typedef struct {
    char nome[50];
    int idade;
    float salario;
    char rua[50];
    int num;
    char estado[50];
}registro;


int main (){
registro pessoa[6];
int i=0, j=0, presente=0, aux=5;
char nomepesquisa[45];
char comando[15];

while (fgets(comando, 50, stdin) !=NULL)
{
comando[strlen(comando)-1]= '\0';
setbuf(stdin, NULL);

    if(strcmp(comando,"inserir")==0){ //inserir
       //printf("insira os dados\n");   
        scanf("%s %d %f %s %d %s", pessoa[i].nome, &pessoa[i].idade, &pessoa[i].salario, pessoa[i].rua, &pessoa[i].num, pessoa[i].estado);
        if (i<=4){
        printf("Registro %s %d %.2f %s %d %s inserido\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].salario, pessoa[i].rua, pessoa[i].num, pessoa[i].estado);        
        }else{
        printf("Espaco insuficiente\n");
        }
        i++;
        setbuf(stdin, NULL);
    
    
    }else if (strcmp(comando,"mostrar")==0){ //mostrar
        fgets(nomepesquisa, 45, stdin);
        nomepesquisa[strlen(nomepesquisa)-1]='\0';
        setbuf(stdin, NULL);
        j=0;
        presente=0;
        for (j=0; j<5; j++){
            if (strcmp(nomepesquisa, pessoa[j].nome)==0){
                presente=1;
                printf("Registro %s %d %.2f %s %d %s\n", pessoa[j].nome, pessoa[j].idade, pessoa[j].salario, pessoa[j].rua, pessoa[j].num, pessoa[j].estado);                           
                
            }      
        }
        if(presente==0){
            printf("Registro ausente\n");
        }     
    }else if (strcmp(comando,"alterar")==0){
        aux=5;
        scanf("%s %d %f %s %d %s", pessoa[aux].nome, &pessoa[aux].idade, &pessoa[aux].salario, pessoa[aux].rua, &pessoa[aux].num, pessoa[aux].estado);
        setbuf(stdin, NULL);
        j=0;
        presente=0;
        for (j=0; j<5; j++){
            if (strcmp(pessoa[aux].nome, pessoa[j].nome)==0){
                presente=1;
                strcpy(pessoa[j].nome, pessoa[aux].nome);
                pessoa[j].idade=pessoa[aux].idade;
                pessoa[j].salario=pessoa[aux].salario;
                strcpy(pessoa[j].rua, pessoa[aux].rua);
                pessoa[j].num=pessoa[aux].num;
                strcpy(pessoa[j].estado, pessoa[aux].estado);
                printf("Registro %s %d %.2f %s %d %s alterado\n", pessoa[j].nome, pessoa[j].idade, pessoa[j].salario, pessoa[j].rua, pessoa[j].num, pessoa[j].estado);                           
                
            }      
        }
        if(presente==0){
            printf("Registro ausente para alteracao\n");
        }     
    }
 
}
return 0;
}

