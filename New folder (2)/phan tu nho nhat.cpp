#include <stdio.h>
int nhonhat(int a[], int n) {
    int min =a[0];
    for (int i=1; i<n; i++) {
        if (a[i]<min){
		min = a[i];}
    }
    return min;
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
    printf("Phan tu nho nhat la: %d\n", nhonhat(a, n));
    return 0;
}
