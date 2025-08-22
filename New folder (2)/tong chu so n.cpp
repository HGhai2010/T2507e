#include <stdio.h>
	int thaydoi(int n){
	int sum=0;
    while (n!= 0){
        sum = sum+(n%10);
        n= n/10;
    }
	return sum;
}
int main(){
	int n;
	printf("Nhap so nguyen n:\n");
	scanf("%d",&n);
	printf("Tong chu so n la: %d", thaydoi(n));
	return 0;
}
