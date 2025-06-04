#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr;
    char str[100];
    fptr = fopen("38-39.txt", "r");
    fgets(str, 100, fptr);
    printf("%s", str);
    fclose(fptr);
    return 0;
}