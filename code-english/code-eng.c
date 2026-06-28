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
}