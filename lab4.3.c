#include<stdio.h>
#include<string.h>
#define tm 90
int main (void){
char str1[tm], c1, c2;
fgets(str1, tm, stdin);
str1[strlen(str1)-1]='\0';
scanf("%c %c", &c1, &c2);


for(int i=0; i<strlen(str1)-1; i++)
if(str1[i]==c1){
str1[i]=c2;
break;
}

printf("%s", str1);

return 0;
}