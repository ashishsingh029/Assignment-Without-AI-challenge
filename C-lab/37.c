#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr;
    fptr = fopen("37-with-spaces.txt", "r");
    char str[50];
    fscanf(fptr, " %[^\n]", str);
    fclose(fptr);
    printf("Written to output file after removing spaces");
    char op[50];
    fptr = fopen("37-spaces-removed.txt", "w");
    for(int i=0,j=0;str[i]!='\0';i++) {
        if(str[i] == ' ') {
            continue;
        }
        op[j++] = str[i];
    }
    fputs(op, fptr);
    fclose(fptr);
    return 0;
}