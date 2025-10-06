#include <stdio.h>

int main() {
    char expr[100];
    printf("Enter expression: ");
    scanf("%s",expr);
    printf("Operators precedence (PEMDAS):\n");
    printf("1. Parentheses ()\n");
    printf("2. Exponentiation ^\n");
    printf("3. Multiplication * and Division /\n");
    printf("4. Addition + and Subtraction -\n");
    printf("Expression entered: %s\n",expr);
    return 0;
}
