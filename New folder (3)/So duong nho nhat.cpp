#include <stdio.h>
int main(){
    int n, sum;
    printf("Nhap mang n : ");
    scanf("%d",&n);
	int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int min = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (min == -1 || a[i] < min) {
                min = a[i];
            }
        }
    }

    if (min == -1) {
        printf("Mang khong co so duong nao.\n");
    } else {
        printf("So duong nho nhat la: %d\n", min);
    }
}
