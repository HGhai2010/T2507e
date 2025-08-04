#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap he so a:\n");
	scanf("%d",&a);
	int b;
	printf("Nhap he so b: \n");
	scanf("%d",&b);
	int c;
	printf("Nhap he so c: \n");
	scanf("%d",&c);
	int A;
	A=b*b-4*a*c;
	if (A<0){
	printf("Pt vo nghiem \n");}
	else{if(A=0){
	double B;
	B=(-b)/2*a;
	printf("Pt co nghiem kep la: %lf \n",B);}
	else{double C;
	C=(-sqrt(A)-b)/2*a;
	double D;
	D=(-b+sqrt(A))/2*a;
	printf("Pt co hai nghiem phan biet %lf va %lf \n",C ,D);}
	}
	}

