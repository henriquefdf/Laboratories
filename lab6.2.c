#include<stdio.h>

long long int func (long long int num){

while (scanf("%lli", &num)!=EOF){
    long long int aux;
    int primo=0;
    aux=2;
    if ((num<2)){
        printf("-1\n");
    }else{
        if (num==2){
        primo=1;
       
        }else
        for (aux=2; aux < num; aux++){
            if (num%aux==0){
                primo=0;
                break;
            }else
            primo=1;
        }
        printf("%d\n", primo);
    } 
}
}

int main (void){
long long int num;    
func(num);

}
