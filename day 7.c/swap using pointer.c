#include <stdio.h>

void swap(int *n1, int *n2) {
    *n1 = *n1 + *n2;  
    *n2 = *n1 - *n2; 
    *n1 = *n1 - *n2;  
}

int main() {
    int a ;
    int b ;
    printf("enter value of a");
    scanf("%d",&a);
    printf("enter value of b");
    scanf("%d",&b);

    printf(" befoe swap a = %d, b = %d\n", a, b);


    swap(&a, &b);

    printf("after swap: a = %d, b = %d\n", a, b);

    return 0;
}
