#include <stdio.h>
#include <string.h>

int main() {
    char nonTerminal, common[20], part1[20], part2[20];
    printf("Enter production in form A->αβ1|αβ2 :\n");
    scanf(" %c->%[^|]|%s", &nonTerminal, part1, part2);

    int i = 0;
    while (part1[i] && part2[i] && part1[i] == part2[i]) {
        common[i] = part1[i];
        i++;
    }
    common[i] = '\0';

    printf("\nGrammar after left factoring:\n");
    printf("%c -> %s%c'\n", nonTerminal, common, nonTerminal);
    printf("%c' -> %s | %s\n", nonTerminal, &part1[i], &part2[i]);

    return 0;
}
