#include<stdlib.h>
#include<stdio.h>
void suma(int *x, int *y)
{
    int S=0;
    S= *x + *y;
    printf("%d",S);
}

int main()
{
    int a, b;
    printf("a="); scanf("%d", &a);
    printf("b="); scanf("%d", &b);
    printf("Suma numerelor este: ");
    suma(&a, &b);
    system("PAUSE");
    return 0;
}
