#include <stdio.h>
int main() {
    int n1,n2;
    scanf("%d", &n1);
    int a1[n1];
    for(int i=0;i<n1;i++) {
        scanf("%d", &a1[i]);
    }
    scanf("%d", &n2);
    int a2[n2];
    for(int i=0;i<n2;i++) {
        scanf("%d", &a2[i]);
    }
    int ans[n1+n2];
    int i=0,j=0,k=0;
    while(i < n1 && j < n2) {
        if(a1[i] < a2[j]) {
            ans[k++] = a1[i++];
        } else {
            ans[k++] = a2[j++];
        }
    }
    while(i < n1) {
        ans[k++] = a1[i++];
    }
    while(j < n2) {
        ans[k++] = a2[j++];
    }
    printf("Sorted Merged Array:\n");
    for(int i=0;i<n1+n2;i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}