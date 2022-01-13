#include<stdio.h>
int main (void){
    
int lin, col, i, j, maior;
scanf("%d %d", &lin, &col);

int matriz [lin][col];

for (i=0;i<lin;i++){ //leitura tab
 for (j=0;j<col; j++)
 scanf("%d",&matriz [i][j]);}
maior=0;

for(i=0; i <lin; i++){
 for (j=0; j < col; j++)
    if (matriz [i][j] > maior)
 maior = matriz[i][j];}

printf("%d\n", maior);
}