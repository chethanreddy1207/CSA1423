#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_ID_LEN 31

const char *keywords[] = {"if","else","while","for","return","int","float","char","double","void",NULL};

int is_keyword(const char *s) {
    for(int i=0; keywords[i]; i++) {
        if(strcmp(s, keywords[i]) == 0) return 1;
    }
    return 0;
}

void print_token(const char *type, const char *lexeme) {
    printf("<%s, %s>\n", type, lexeme);
}

int main() {
    int c;
    while((c = getchar()) != EOF) {
        if(isspace(c)) continue;

        if(isalpha(c) || c == '_') {
            char buf[128]; int i=0;
            buf[i++] = c;
            while((c=getchar())!=EOF && (isalnum(c)||c=='_')) {
                if(i<MAX_ID_LEN) buf[i++] = c;
            }
            buf[i]='\0';
            if(c!=EOF) ungetc(c, stdin);
            if(is_keyword(buf)) print_token("KEYWORD", buf);
            else print_token("IDENTIFIER", buf);
            continue;
        }

        if(isdigit(c)) {
            char buf[128]; int i=0;
            buf[i++] = c;
            while((c=getchar())!=EOF && isdigit(c)) buf[i++] = c;
            buf[i]='\0';
            if(c!=EOF) ungetc(c, stdin);
            print_token("CONSTANT", buf);
            continue;
        }

        if(strchr("+-*/=<>", c)) {
            char tok[2]={c,'\0'};
            print_token("OPERATOR", tok);
            continue;
        }

        if(strchr(";,(){}", c)) {
            char tok[2]={c,'\0'};
            print_token("SEPARATOR", tok);
            continue;
        }

        char tok[2]={c,'\0'};
        print_token("UNKNOWN", tok);
    }
    return 0;
}
