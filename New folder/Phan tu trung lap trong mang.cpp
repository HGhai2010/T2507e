#include <stdio.h>
int main() {
    int n;
    printf("Nhap n : ");
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Mang sau khi loai trung lap:\n");
    for (int i = 0; i < n; i++) {
        int b= 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                b= 1; //
            }
        }
        if (b == 0) {
            printf("%d ", a[i]);
        }
    }
}
