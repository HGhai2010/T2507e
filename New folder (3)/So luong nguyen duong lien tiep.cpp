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
    int c= 0;
    int b= 0;
    for (i = 0; i < n; i++) {
        if (a[i] > 0){
            b++;
            if (b> c) {
                b=c;
            }
        } else {
            b=0;
        }
    }
    printf("So luong so duong lien tiep nhieu nhat la: %d\n", a);
}
