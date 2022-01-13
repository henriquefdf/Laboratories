#include<stdio.h>

int main (void)
{
int n, soma=0, i=0;
scanf("%d", &n);

for (i=0; i <=n; i++)
{
    soma+=i;
}
printf("%d", soma);

    return 0;
}