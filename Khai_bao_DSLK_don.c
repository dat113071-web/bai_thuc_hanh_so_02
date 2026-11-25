#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char hoTen[50];
    char maSV[20];
    float d1, d2, d3;
} SinhVien;
typedef struct Node {
    SinhVien data;
    struct Node *next;
} Node;
typedef struct {
    Node *pHead;
    Node *pTail;
} List;
