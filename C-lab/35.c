#include <stdio.h>
#include <stdlib.h>
typedef struct student {
    int roll;
    char name[30];
    char class[10];
    int year;
    float marks;
} Student;
int main() {
    FILE* fptr;
    fptr = fopen("35-36-students.txt", "w");
    if(fptr == NULL) {
        printf("File not opened\n");
    }
    printf("Enter roll, name, class, year and marks for 10 students:\n");
    Student s;
    for(int i=0;i<10;i++) {
        printf("Enter roll: ");
        scanf("%d", &s.roll);
        printf("Enter name: ");
        scanf(" %[^\n]", s.name);
        printf("Enter class: ");
        scanf(" %[^\n]", s.class);
        printf("Enter year: ");
        scanf("%d", &s.year);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fptr, "%d\n", s.roll);
        fputs(s.name, fptr);
        fputs("\n", fptr);
        fputs(s.class, fptr);
        fputs("\n", fptr);
        fprintf(fptr, "%d\n", s.year);
        fprintf(fptr, "%.2f\n", s.marks);
    }
    return 0;
}