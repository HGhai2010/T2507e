#include <stdio.h>
int main() {
    int n,sum=0;
    printf("Nhap so n:\n");
    scanf("%d",&n);
    while (n!= 0) {
        sum = sum+(n%10);
        n= n/10;
    }
	printf("Tong cac chu so n la %d",sum);
}
