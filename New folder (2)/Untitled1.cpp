#include<stdio.h>
int main(){
	 int n;
	 int sum=0;
	 printf("Nhap so n:\n");
	 scanf("%d",&n);
	for(int i=1;i <= n; i++){
		if(n % i == 0){
			sum+=i;
		}
	}
	printf("Tong uoc cua %d la %d",n, sum);
}

