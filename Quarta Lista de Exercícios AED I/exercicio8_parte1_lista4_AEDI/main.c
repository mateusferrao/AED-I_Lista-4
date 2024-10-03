#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, *ptr1, *ptr2, *ptr3;

    printf("\nValor 1: ");
    scanf("%d",&a);

    ptr1 = &a;
    printf("a %p %d",ptr1,a);

    printf("\nValor 2: ");
    scanf("%d",&b);

    ptr2 = &b;
    printf("b %p %d",ptr2,b);

    printf("\nValor 3: ");
    scanf("%d",&c);

    ptr3 = &c;
    printf("c %p %d",ptr3,c);

    return 0;
}
