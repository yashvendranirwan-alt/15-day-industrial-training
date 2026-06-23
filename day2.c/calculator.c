#include <stdio.h>

int main() {
    float a, b, c;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter an op (+, -, *, /): ");
    scanf(" %c", &op);

    
    switch(op) { 
        case '+':
            c = a + b;
            printf("a + b = %.2f\n", c);
            break;
            
        case '-':
            c = a - b;
            printf("a - b = %.2f\n", c);
            break;

        case '/':
            if (b != 0) {
                c = a / b;
                printf("a / b = %.2f\n", c);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        case '*':
            c = a * b;
            printf("a * * b = %.2f\n", c);
            break;
            
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
