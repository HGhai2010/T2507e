#include <stdio.h>
int lonhat(int a[], int n) {
    int max=a[0];
    for (int i=1;i <n;i++){
        if (a[i] > max) max = a[i];
    }
    return max;
}
int main() {
    int n;
    printf("Nhap n: ");
    int a[n];
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Phan tu lon nhat la: %d\n", lonhat(a, n));
    return 0;
}
