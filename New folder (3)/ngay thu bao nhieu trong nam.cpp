#include <stdio.h>

int main() {
    int ngay, thang, nam,sum=0;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        a[1] = 29;
    }
    for (int i=0; i<thang-1; i++) {
        sum += a[i];
    }
    sum += ngay;
    printf("Day la ngay thu %d trong nam\n", sum);
}
