#include <stdio.h>
#include <stdlib.h>
int main() {
    int h, c;
    printf("Nhap so hang va so cot: ");
    scanf("%d%d", &h, &c);
    if (h <= 0 || c <= 0) {
        printf("So hang va so cot phai lon hon 0!\n");
        return 1;
    }
    float **ma = (float **)malloc((size_t)h * sizeof(float *));
    if (ma == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < h; i++) {
        ma[i] = (float *)malloc((size_t)c * sizeof(float));
        if (ma[i] == NULL) {
            printf("Khong du bo nho tai dong %d!\n", i);
            for (int k = 0; k < i; k++) {
                free(ma[k]);
            }
            free(ma);
            return 1;
        }
    }
    printf("Nhap cac phan tu ma tran:\n");
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%f", &ma[i][j]);
        }
    }
    printf("Ma tran %dx%d vua tao:\n", h, c);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < c; j++) {
            printf("%.2f\t", ma[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < h; i++) {
        free(ma[i]);
    }
    free(ma);
    return 0;
}
