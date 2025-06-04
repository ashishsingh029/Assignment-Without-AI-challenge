#include <stdio.h>
#include <stdlib.h>
void displayMatrix(int, int*);
void calculateSumOfMatrices(int, int*, int*);
void calculateDifferenceOfMatrices(int, int*, int*);
void multiplyMatrices(int, int*, int *, int *);
void transponseMatrix(int, int *, int *);
int main() {
    int m; // only for square matrices
    scanf("%d", &m);
    int a[m][m];
    int b[m][m];
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int choice;
    while(1) {
        scanf("%d", &choice);
        int ans[m][m];
        switch(choice) {
            case 1:
                calculateSumOfMatrices(m, (int *)a, (int *)b);
                printf("Sum of Matrices:\n");
                displayMatrix(m, (int *)a);
                break;
            case 2:
                calculateDifferenceOfMatrices(m, (int *)a, (int *)b);
                printf("Differnce of Matrices:\n");
                displayMatrix(m, (int *)a);
                break;
            case 3:
                multiplyMatrices(m, (int *)a, (int *)b, (int *)ans);
                printf("Product of Matrices:\n");
                displayMatrix(m, (int *)ans);
                break;
            case 4:
                transponseMatrix(m, (int *)a, (int *)ans);
                printf("Transponse of Matrix:\n");
                displayMatrix(m, (int *)ans);
                break;
            case -1:
                exit(0);
            default:
                printf("Enter correct choice:\n");
        }
    }
    return 0;
}
void transponseMatrix(int m, int *m1, int *ans) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            *(ans + j*m + i) = *(m1 + i*m + j);
        }
    }
}
void multiplyMatrices(int m, int*m1, int *m2, int *ans) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            int sum = 0;
            for(int k=0;k<m;k++) {
                sum = sum + *(m1 + i*m + k) * *(m2 + k*m + j);
            }
            *(ans + i*m + j) = sum;
            sum = 0;
        }
    }
}
void calculateDifferenceOfMatrices(int m, int *m1, int *m2) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            *(m1 + i*m + j) -= *(m2 + i*m + j);
        }
    }
}
void calculateSumOfMatrices(int m, int *m1, int *m2) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            *(m1 + i*m + j) += *(m2 + i*m + j);
        }
    }
}
void displayMatrix(int m, int *m0) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ", *(m0 + i*m + j));
        }
        printf("\n");
    }
}