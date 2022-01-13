#include<stdio.h>
#include<string.h>


typedef struct {
    char nome[50];
    int idade;
    float salario;
}registro;


int main (){
registro pessoa[4];
int i=0, j=0, presente=0;
char nomepesquisa[45];
char comando[15];

while (fgets(comando, 50, stdin) !=NULL)
{
comando[strlen(comando)-1]= '\0';
setbuf(stdin, NULL);

    if(strcmp(comando,"inserir")==0){ //inserir
       //printf("insira os dados\n");   
        scanf("%s %d %f", pessoa[i].nome, &pessoa[i].idade, &pessoa[i].salario);
        if (i<=3){
        printf("Registro %s %d %.2f inserido\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].salario);        
        }else{
        printf("Espaco insuficiente\n");
        }
        i++;
        setbuf(stdin, NULL);
    
    
    }else if (strcmp(comando,"mostrar")==0){ //mostrar
    //printf("pesquise o nome\n");
        fgets(nomepesquisa, 45, stdin);
        nomepesquisa[strlen(nomepesquisa)-1]='\0';
        setbuf(stdin, NULL);
        j=0;
        presente=0;
        for (j=0; j<4; j++){
            if (strcmp(nomepesquisa, pessoa[j].nome)==0){
                presente=1;
                printf("Registro %s %d %.2f\n", pessoa[j].nome, pessoa[j].idade, pessoa[j].salario);                           
                
            }      
        }
        if(presente==0){
            printf("Registro ausente\n");
        }     
    }
 
}
return 0;
}

