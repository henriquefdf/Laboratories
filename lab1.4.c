#include <stdio.h>

int main()
{
int mont, n100, n50, n20, n10, n5, n2, n1;

scanf("%d",&mont);
n100=mont/100; //pegar o resto da divisão e sempre dividir pela próxima nota
n50=mont%100/50; //não usar uma var só para o resto, não funcionou ):
n20=mont%100%50/20;
n10=mont%100%50%20/10;
n5=mont%100%50%20%10/5;
n2=mont%100%50%20%10%5/2;
n1=mont%100%50%20%10%5%2/1;

printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", n100, n50, n20, n10, n5, n2, n1);

return 0;
}