#include<stdio.h>

int main ()
{
    int num, m2, m3, m5, aux, mtd;
    scanf("%d", &num);
    m2=0, m3=0, m5=0, aux=0, mtd=0;
    
    while (aux<=num) //teste múltiplo 2
    {
        (aux=aux+2);
        (m2++);
    }
    printf("Múltiplos de 2: %d\n", m2-1);
        aux=0;

    while (aux<=num) //teste múltiplo 3
    {
        (aux=aux+3);
        (m3++);
    }
    printf("Múltiplos de 3: %d\n", m3-1);
        aux=0;

    while (aux<=num) //teste múltiplo 5
    {
        (aux=aux+5);
        (m5++);
    }
    printf("Múltiplos de 5: %d\n", m5-1);
        aux=0;

    while (aux<=num)
    {
        aux=aux+1;
        if ((aux%2==0) && (aux%3==0) && (aux%5==0))
        {
            mtd++;
        }
    }
    printf("Múltiplos de todos: %d\n", mtd);
    
    
    return 0;
}