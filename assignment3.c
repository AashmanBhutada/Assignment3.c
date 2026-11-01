//Write a menu driven program in C to implement the basic arithmetic operations.(Let the two numbers be 20 and 4 respectively)
#include <stdio.h>

int main() {
    char op;
    int a, b, result = 0;

    printf("Enter operator (+, -, *, /, m): ");
    scanf(" %c", &op);

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 'm':
        if (b!=0){
            result = a % b;
            } else {printf("Error:Division by Zero\n");}
            break;
        default:
            printf("Invalid operator\n");
      } 

    printf("Result= %d\n", result);

    return 0;
}