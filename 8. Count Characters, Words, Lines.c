#include <stdio.h>
#include <ctype.h>

int main() {
    int c, chars=0, words=0, lines=0, in_word=0;
    while((c=getchar())!=EOF) {
        chars++;
        if(c=='\n') lines++;
        if(isspace(c)) in_word=0;
        else if(!in_word) {in_word=1; words++;}
    }
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
