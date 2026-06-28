#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int *p;

    printf("Enter the size of array (n): ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf(" %d", &a[i]); 
    }
    p = a; 
    printf("\nTraversing array elements:\n");
    for(i = 0; i < n; i++) {
       
        printf("%d ", *(p + i)); 
    }
    printf("\n");

    return 0;
}
