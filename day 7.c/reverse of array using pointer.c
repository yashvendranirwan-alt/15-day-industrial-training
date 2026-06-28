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
    p = &a[n - 1]; 
    printf("\nReverse Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *p);
        p--;             
    }
    printf("\n");

    return 0;
}
