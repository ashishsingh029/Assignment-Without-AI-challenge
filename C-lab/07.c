#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5;
    scanf("%f", &m1);
    scanf("%f", &m2);
    scanf("%f", &m3);
    scanf("%f", &m4);
    scanf("%f", &m5);
    float total = m1 + m2 + m3 + m4 + m5;
    float avg = total / 5.0;
    float per = avg;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("% Marks: %.2f%\n", per);
    return 0;
}