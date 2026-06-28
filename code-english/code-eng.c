#include <stdio.h>
int main() {
    int a;
    int b;
    int m;
    int n;
    printf("Enter the value of your matrix row:  ");
    scanf("%d", &a);
    printf("Enter the value of your matrix column:  ");
    scanf("%d", &b);
    while(a <= 0) {
        printf("The value must be natural numbers:  ");
        scanf("%d", &a);
    }
    while(b <= 0) {
        printf("The value must be natural numbers:  ");
        scanf("%d", &b);
    }
    int matrix[a][b];
    for(m = 0; m< a; m++) {
        printf("Enter the value in row %d: \n", m);
        for(n = 0; n < b; n++) {
            printf("[%d][%d]: ", m, n);
            scanf("%d", &matrix[m][n]);
        }
    }
    int max = matrix[0][0];
    int min = matrix[0][0];
    for(m = 0; m < a; m++) {
        for(n = 0; n< b; n++) {
            if(matrix[m][n] > max) {
                max = matrix[m][n];
            }
            if(matrix[m][n] < min) {
                min = matrix[m][n];
            }
        }
    }
    printf("The maximum value of the matrix is: %d\nThe minimum value of your matrix is: %d\n", max, min);
    return 0;
}