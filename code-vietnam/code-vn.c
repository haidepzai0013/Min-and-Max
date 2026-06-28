#include <stdio.h>
int main() {
    int a;
    int b;
    int m;
    int n;
    printf("Vui long nhap kich thuoc hang ma tran cua ban: \n");
    scanf("%d", &a);
    printf("Vui long nhap kich thuoc cot ma tran cua ban: \n");
    scanf("%d", &b);
    while(a <= 0) {
        printf("Gia tri phai la so tu nhien: \n");
        scanf("%d", &a);
    }
    while(b <= 0) {
        printf("Gia tri phai la so tu nhien: \n");
        scanf("%d", &b);
    }
    int matrix[a][b];
    for(m = 0; m < a; m++) {
        printf("Nhap gia tri tai hang %d: \n", m);
        for(int n = 0; n < b; n++) {
            printf("[%d][%d]: ", m, n);
            scanf("%d", &matrix[m][n]);
        }
    }
    int max = matrix[0][0];
    int min = matrix[0][0];
    for(m = 0; m < a; m++) {
        for(n = 0; n < b; n++) {
            if(matrix[m][n] > max) {
                max = matrix[m][n];
            }
            if(matrix[m][n] < min) {
                min = matrix[m][n];
            }
        }
    }
    printf("Gia tri lon nhat cua ma tran la: %d\nGia tri nho nhat cua ma tran la: %d", max, min);
    return 0;
}
