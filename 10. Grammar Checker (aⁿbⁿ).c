#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; int i=0,a=0,b=0;
    printf("Enter string: ");
    scanf("%s",str);
    while(str[i]=='a'){a++;i++;}
    while(str[i]=='b'){b++;i++;}
    if(str[i]=='\0' && a==b && a>0) printf("Valid grammar a^n b^n\n");
    else printf("Invalid string\n");
    return 0;
}
