#include<stdio.h>

int main (void)
{
    int n=233;

do
{
    if(n>=300 && n<=400)
        n+=3;
    else
        n+=5;
    printf("%d\n", n);


} while (n<=457);

    return 0;

}