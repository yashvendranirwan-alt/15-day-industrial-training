#include <stdio.h>

int main() {
    int a[100];
    int n, i;
    int *p, max;

    printf("Enter the size of array (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    p = a; 
    max = *p; 
    for(i = 1; i < n; i++) {

        if(*(p + i) > max) {
            max = *(p + i); 
        }
    }

    printf("Largest number = %d\n", max);
    return 0;
}
