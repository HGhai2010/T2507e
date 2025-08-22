#include <stdio.h>
int sdn(int n){
    int a= 0;
    while (n!=0){
        int b=n %10;
        a =a*10+b;
        n =n/10;
    }
    return a;
}
int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("So dao nguoc cua n la: %d\n",sdn(n));
    return 0;
}
