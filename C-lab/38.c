#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr;
    char str[100] = "Written by Question 38 in File and to be read by Question 39 from File";
    fptr = fopen("38-39.txt", "w");
    fputs(str, fptr);
    fclose(fptr);
    return 0;
}