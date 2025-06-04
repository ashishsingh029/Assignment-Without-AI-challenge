#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fptr;
    fptr = fopen("35-36-students.txt", "r");
    for(int i=0;i<10;i++) {
        int roll;
        char name[30];
        char temp[10];
        float marks;
        fscanf(fptr, "%d", &roll);
        fscanf(fptr, " %[^\n]", name);
        fscanf(fptr, " %[^\n]", temp);
        fscanf(fptr, " %[^\n]", temp);
        fscanf(fptr, "%f", &marks);
        printf("Roll: %d\tName: %s\t Marks: %.2f\n", roll, name, marks);
    }
    return 0;
}