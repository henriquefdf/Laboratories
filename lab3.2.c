#include<stdio.h>
#define tmax 800
int main (){
long fib[tmax], n=1, aux=2;
fib[0]=0, fib[1]=1;
int passo=0;


while (0 <= n && n <= 800){
scanf("%ld", &n);
    for (aux=2; aux<n+1; aux++){
    fib[aux]=fib[aux-1]+fib[aux-2];}
printf("%ld\n", fib[n]);
}

}

//if (n>0 && n>800)