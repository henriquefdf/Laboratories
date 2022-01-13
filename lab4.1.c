#include<stdio.h>
#include<string.h>
#define tm 90
int main (void){
char str1[tm], str2[tm];
fgets(str1, tm, stdin);
str1[strlen(str1)-1]='\0';
fgets(str2, tm, stdin);
strcat(str1, str2);
printf("%s", str1);

return 0;
}