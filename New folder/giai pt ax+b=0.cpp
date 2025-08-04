#include <stdio.h>

int main() {
    int A, B;
    printf("Nhap A= ");
    scanf("%d", &A);

    printf("Nhap B= ");
    scanf("%d", &B);
    if (A == 0) {
        if (B == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        int x = -B / A;
        printf("x = %d\n", x);
         }

}
