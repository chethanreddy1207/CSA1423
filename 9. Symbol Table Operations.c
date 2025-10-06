#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[50];
    char type[20];
} table[100];

int count=0;

void insert(char *n, char *t) {
    strcpy(table[count].name,n);
    strcpy(table[count].type,t);
    count++;
}

int search(char *n) {
    for(int i=0;i<count;i++) {
        if(strcmp(table[i].name,n)==0) return i;
    }
    return -1;
}

void display() {
    for(int i=0;i<count;i++) {
        printf("%s : %s\n",table[i].name,table[i].type);
    }
}

int main() {
    int ch;
    char n[50],t[20];
    while(1) {
        printf("\n1.Insert 2.Search 3.Display 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1) {
            printf("Name Type: ");
            scanf("%s %s",n,t);
            insert(n,t);
        } else if(ch==2) {
            printf("Name: ");
            scanf("%s",n);
            int i=search(n);
            if(i!=-1) printf("Found %s : %s\n",table[i].name,table[i].type);
            else printf("Not Found\n");
        } else if(ch==3) display();
        else break;
    }
}
