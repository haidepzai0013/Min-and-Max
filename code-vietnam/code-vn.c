#include <stdio.h>
int d;
void so_doc_nhat(int x, int y, int ma_tran[x][y], int t[]) {
    d = 0;
    int xuat_hien;
    for (int h = 0; h < x; h++) {
        for (int i = 0; i < y; i++) {
            xuat_hien = 0;
            for (int j = 0; j < x; j++) {
                for (int k = 0; k < y; k++) {
                    if(ma_tran[h][i] == ma_tran[j][k]) {
                        xuat_hien++;
                    }
                }
            }
            if (xuat_hien == 1) {
                t[d] = ma_tran[h][i];
                d++;
            }
        }
    }
}
int main() {
    int a;
    int b;
    int m;
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
    int du_phong[a * b];
    printf("So lon nhat, nho nhat phai la so doc nhat\n");
    p:
    for(m = 0; m < a; m++) {
        printf("Nhap gia tri tai hang %d: \n", m);
        for(int n = 0; n < b; n++) {
            printf("\n%d, %d: ", m, n);
            scanf("%d", &matrix[m][n]);
        }
    }
    so_doc_nhat(a, b, matrix, du_phong);
    if(d == 0) {
        printf("Loi! Khong co so doc nhat, Vui long nhap lai:\n");
        goto p;
    }
    if(d == 1) {
        printf("Chi co mot so doc nhat nen GTLN, GTNN se bang nhau");
    }
    int doc_nhat[d];
    for(int o = 0; o < d; o++) {
        doc_nhat[o] = du_phong[o];
    }
    int max = doc_nhat[0];
    int min = doc_nhat[0];
    for (m = 0; m < d; m++) {
        if(doc_nhat[m] > max) {
            max = doc_nhat[m];
        }
        if(doc_nhat[m] < min) {
            min = doc_nhat[m];
        }
    }
    printf("Gia tri lon nhat cua ma tran la: %d\nGia tri nho nhat cua ma tran la: %d", max, min);
    return 0;
}
