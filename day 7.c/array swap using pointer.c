#include <stdio.h>

int main() {
    int a[100]; 
    int n, i;
    int *p, sum = 0;

    printf("Enter the size of array (n): ");
    if (scanf("%d", &n) != 1) return 1; 

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {

        scanf(" %d", &a[i]); 
    }

    p = a; 

    for(i = 0; i < n; i++) {
        sum += *(p + i);
    }

    printf("sum = %d\n", sum);
    return 0;
}
