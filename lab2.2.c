#include<stdio.h>
#include<math.h>

int main ()
{

double x, pi=4;
scanf("%lf", &x);
int i=1;

while ((fabs(pi-M_PI)>x))
{
    pi+=(i%2==0? 1: -1)* (double)4/(2*i +1);
    i++;
}
printf("%d", i);

    return 0;
}