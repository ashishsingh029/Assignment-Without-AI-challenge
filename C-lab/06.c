#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    printf("The factors of %d are:\n", num);
    for(int i=1;i<num;i++) {
        if(num%i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}