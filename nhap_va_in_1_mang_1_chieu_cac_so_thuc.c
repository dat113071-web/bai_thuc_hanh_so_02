#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phan tu phai lon hon 0!\n");
        return 1;
    }

    float *a = (float *)malloc((size_t)n * sizeof(float));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]); 
    }
    printf("Mang %d phan tu vua tao:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%.2f\t", a[i]); 
    }
    printf("\n");
    free(a);
    return 0;
}
