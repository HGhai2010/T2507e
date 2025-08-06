#include<stdio.h>
int main(){
	int tien;
	printf("Nhap so tien can rut (Boi so 10,000 ,vnd): \n");
	scanf("%d",&tien);
	int tiendu;
	int k500= tien/500000;
	tiendu= tien%500000;
	int k200= tien/200000;
	tiendu= tien%200000;
	int k100= tien/100000;
	tiendu= tien%100000;
	int k50= tien/50000;
	tiendu= tien%50000;
	int k20= tien/20000;
	tiendu= tien%20000;
	int k10= tien/10000;
	tiendu= tien%10000;
	printf("Tien mat duoc rut la: %d to 500k, %d to 200k, %d to 100k, %d to 50k, %d to 20k, %d to 10k",k500,k200,k100,k50,k20,k10);
}

