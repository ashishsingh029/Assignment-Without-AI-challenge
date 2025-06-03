#include <stdio.h>
int main() {
    int i;
    scanf("%d", &i);
    if(i&1) {
        printf("%d is Odd", i);
    } else {
        printf("%d is Even", i);
    }
    return 0;
}