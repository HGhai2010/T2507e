#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    int max= 0;
    int now= 0;

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            now+= a[i];
            if (now > max) {
                max=now;
            }
        } else {
            now=0;
        }
    }
    printf("Tong lon nhat cua chuoi so duong lien tiep la: %d\n", max);
}
