#include <stdio.h>
int tong(int n) {
    int sum=0;
    while (n>0){
        sum =sum+n%10;
        n =n/10;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap so duong: ");
    scanf("%d", &n);
    printf("Tong cac chu so cua %d la: %d\n", n, tong(n));
    return 0;
}
