#include <stdio.h>

int main() {
    char ch;
    int spaces = 0, newlines = 0;

    printf("Enter text (end with $):\n");

    while ((ch = getchar()) != '$') {
        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            newlines++;
    }

    printf("\nNumber of Whitespaces: %d\n", spaces);
    printf("Number of Newlines: %d\n", newlines);

    return 0;
}