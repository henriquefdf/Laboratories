#include<stdio.h>

long int func(n,i,j,soma){

soma=0;
for(i=2;n;i++)
    for(j=2;j/i?soma+=i,n--,0:i%j++;);
    return soma;
}


int main() {

long int i;
while (scanf("%ld", &i)!=EOF){

printf("%ld\n", func(i));
}
return 0;
}