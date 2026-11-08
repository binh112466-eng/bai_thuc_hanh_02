#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    printf("Nhap so phan tu : ");
    scanf("%d", &c);
    printf("Nhap so vao mang : ") ;
    
    int *mang = (int *)malloc(c * sizeof(int));
    if (mang == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i = 0; i < c; i++) {
            scanf("%d", &mang[i]);
        }
    printf("Mang %d vua tao:\n", c);
    for (int i = 0; i < c; i++) {
 
            printf("%d\t", mang[i]);
        }
        printf("\n");

    for (int i = 0; i < c; i++) {
        free(mang);
    }
    free(mang);

    return 0;
}

