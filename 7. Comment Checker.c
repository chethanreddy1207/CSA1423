#include <stdio.h>
#include <string.h>

int is_comment(const char *line) {
    int n = strlen(line);
    if(strncmp(line,"//",2)==0) return 1;
    if(strncmp(line,"/*",2)==0 && n>=4) {
        if(line[n-2]=='*' && line[n-1]=='/') return 1;
    }
    return 0;
}

int main() {
    char line[256];
    printf("Enter a line: ");
    if(!fgets(line,sizeof(line),stdin)) return 0;
    line[strcspn(line,"\n")] = '\0';
    if(is_comment(line)) printf("This line IS a comment.\n");
    else printf("This line is NOT a comment.\n");
    return 0;
}
