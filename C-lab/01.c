#include <stdio.h>
int main() {
    char c;
    int i;
    float f;
    double d;
    scanf(" %c", &c);
    scanf("%i", &i);
    scanf("%f", &f);
    scanf("%lf", &d);
    printf("Character input: %c\n", c);
    printf("Integer input: %d\n", i);
    printf("Float input: %f\n", f);
    printf("Double input: %lf", d);
    return 0;
}