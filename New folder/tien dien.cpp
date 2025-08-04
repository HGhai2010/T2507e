#include <stdio.h>
int main(){
	double A;
	printf("Nhap so kWh tieu thu:\n");
	scanf("%lf",&A);
	if(A<=50){
	double B;
	B=A*1.678;
	printf("Tien dien la: %lf vnd",B);}
	else{
		if(A<=100){
	double C;
		C=83.9+(A-50)*1.734;
		printf("Tien dien la: %lf vnd",C);}
	else{
		if(A<200){
	double D;
		D=170.6+(A-100)*2.014;
		printf("Tien dien la: %lf vnd",D);}
	else{
	double E;
		E=372+2.536*(A-200);
		printf("Tien dien la: %lf vnd",E);
		}
	}
	}
}
