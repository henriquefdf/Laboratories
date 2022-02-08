#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int ehprimo(int num){

    for (int j=2; j<num; j++){
        if(num%j==0){
            return 0;
        }
    }
return 1;
}


void primo(int m, int *p1, int *p2){

    for (int aux = m-1; aux >= 1; aux--){
        if (ehprimo(aux)==1){
            *p1=aux;
            break;
        }            
    }
for (int aux = m+1; aux <99999; aux++){
        if (ehprimo(aux)==1){
            *p2=aux;
            break;
        }            
    }
}


int main(){
int m;
int p1=0, p2=0;

scanf("%d", &m);

primo(m, &p1, &p2);

printf("%d\n%d\n", p1, p2);


return EXIT_SUCCESS;
}
