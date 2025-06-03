#include <stdio.h>
void inputAndCalculate();
void calculateAreaAndCircumference(double r);
int main() {
    inputAndCalculate();
    return 0;
}
void inputAndCalculate() {
    double r;
    scanf("%lf", &r);
    calculateAreaAndCircumference(r);
}
void calculateAreaAndCircumference(double r) {
    printf("Area = %.2lf\n", 3.14*r*r);
    printf("Circumference = %.2lf", 3.14*2*r);
}