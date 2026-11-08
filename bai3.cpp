#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char hoten[30];
    int masv;
    float d1, d2, d3;
} SV;

void nhapSV(SV *x) {
	printf("Nhap thong tin sinh vien : ")
    scanf("%d %s %f %f %f", &x->masv, x->hoten, &x->d1, &x->d2, &x->d3);
}

void inSV(SV x) {
    printf("%d %s %.2f %.2f %.2f\n", x.masv, x.hoten, x.d1, x.d2, x.d3);
}

int main() {
    int n;
    printf("Nhap so sinh vien : ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    
    SV *ds = (SV*) malloc(n * sizeof(SV));
    for (int i = 0; i < n; i++) nhapSV(&ds[i]);

    printf("\n--- DANH SACH SINH VIEN ---\n");
    for (int i = 0; i < n; i++) inSV(ds[i]);

    free(ds);
    return 0;
}
