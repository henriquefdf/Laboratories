#include<stdio.h>
#include<string.h>
#define tm 90
int main (void){

char str[tm], entrada[tm];
int i=0;

fgets(str, tm, stdin);
str[strlen(str)-1]='\0';
for (i=strlen(str)-1; i>=0; i--){

printf("%c", str[i]);
}
}