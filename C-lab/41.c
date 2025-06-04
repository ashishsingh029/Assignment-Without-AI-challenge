#include <stdio.h>
#include <stdlib.h>
int increasingComparator(const void *, const void *); 
int decreasingComparator(const void *, const void *);
int main() {
    int n = 10;
    int *a = (int *)malloc(10 * sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), increasingComparator);
    printf("Arrays in increasing order:\n");
    for(int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    qsort(a, n, sizeof(int), decreasingComparator);
    printf("\nArrays in decreasing order:\n");
    for(int i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
int increasingComparator(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int decreasingComparator(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}