#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char hoTen[50];
    char maSV[20];
    float d1, d2, d3;
} SinhVien;
int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So luong sinh vien phai lon hon 0!\n");
        return 1;
    }
    SinhVien *ds = (SinhVien *)malloc((size_t)n * sizeof(SinhVien));
    if (ds == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nNhap sinh vien thu %d:\n", i + 1);
        getchar();
        printf("Ho ten: ");
        fgets((ds + i)->hoTen, sizeof((ds + i)->hoTen), stdin);
        (ds + i)->hoTen[strcspn((ds + i)->hoTen, "\n")] = '\0';
        printf("Ma sinh vien: ");
        scanf("%19s", (ds + i)->maSV);

        printf("Nhap diem 1, diem 2, diem 3: ");
        scanf("%f%f%f", &(ds + i)->d1, &(ds + i)->d2, &(ds + i)->d3);
    }
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.2f %.2f %.2f\n",
               i + 1,
               (ds + i)->hoTen,
               (ds + i)->maSV,
               (ds + i)->d1,
               (ds + i)->d2,
               (ds + i)->d3);
    }
    free(ds);
    return 0;
}
