#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidIdentifier(char *id) {
    if (!id[0])
        return 0;
    if (!(isalpha(id[0]) || id[0] == '_'))
        return 0;
    for (int i = 1; id[i] != '\0'; i++) {
        if (!(isalnum(id[i]) || id[i] == '_'))
            return 0;
    }
    return 1;
}

int main() {
    char identifier[50];
    printf("Enter an identifier: ");
    scanf("%s", identifier);

    if (isValidIdentifier(identifier))
        printf("Valid identifier\n");
    else
        printf("Invalid identifier\n");

    return 0;
}
