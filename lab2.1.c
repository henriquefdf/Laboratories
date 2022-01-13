#include<stdio.h>

int main ()
{
    int n, x0, x1, xn1, xn2, passo=2;
    scanf("%d%d%d", &n, &x0, &x1);

    while (passo!=n+1)
    xn1=(4*x1)-(2*x0);
    printf("x%d: %d\n", passo, xn1);
    passo++;
    x0=x1;
    x1=xn1;
       
    return 0;
}