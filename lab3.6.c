#include<stdio.h>
int main (void){
    
int lin, col, i, j, maior;
scanf("%d %d", &lin, &col);

int matriz [lin][col];

for (i=0;i<lin;i++){ //leitura tab
 for (j=0;j<col; j++)
 scanf("%d",&matriz [i][j]);}


for (i=0;i<lin;i++){ //leitura tab
 for (j=0;j<col; j++)
 printf("%d\n",(-1)*matriz [i][j]);}

}