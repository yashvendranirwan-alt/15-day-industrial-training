#include <stdio.h>
int factorial(int n) {
   
    if (n == 0 || n == 1) {
        return 1;
    }
 
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("enter the number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("negative number factorial not possible।\n");
    } else {
        printf("%d factorial = %d\n", num, factorial(num));
    }

    return 0;
}
