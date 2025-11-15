#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double num1, num2, result;
    int continueCalc = 1;
    
    printf("=== Simple Calculator ===\n\n");
    
    while (continueCalc) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);
        
        printf("Enter first number: ");
        if (scanf("%lf", &num1) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }
        
        printf("Enter second number: ");
        if (scanf("%lf", &num2) != 1) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }
        
        // Perform calculation based on operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("\nError: Division by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            default:
                printf("\nError: Invalid operator!\n");
                break;
        }
        
        // Ask if user wants to continue
        printf("\nDo you want to perform another calculation? (1 = Yes, 0 = No): ");
        scanf("%d", &continueCalc);
        printf("\n");
    }
    
    printf("Thank you for using the calculator!\n");
    return 0;
}