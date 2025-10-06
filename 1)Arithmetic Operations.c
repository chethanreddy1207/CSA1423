#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch;
    printf("Enter an expression (end with $):\n");

    while ((ch = getchar()) != '$') 
	{  
        switch(ch) {
            case '+': printf("Operator: PLUS (+)\n"); break;
            case '-': printf("Operator: MINUS (-)\n"); break;
            case '*': printf("Operator: MULTIPLY ()\n"); break;
            case '/': printf("Operator: DIVIDE (/)\n"); break;
            default : break;  
        }
    }
    return 0;
}