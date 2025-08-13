#include<stdio.h>
int main(){
	int a;
	printf("Nhap so a tim uoc lon nhat:\n");
	scanf("%d",&a);
	int b;
	printf("Nhap so b tim boi nho nhat:\n");
	scanf("%d",&b);
	int c=0;
	int i=1;
	while(i<=a){
		i++;
		if(a%i==0){
			c++;}
	}
	int e=b;
	while(e>=b){
		e++;
		if(e%b==0){
			break;
		}
	}		printf("Uoc lon nhat cua %d la %d\n",a,c);
			printf("Boi nho nhat cua %d la %d\n",b,e);
}
