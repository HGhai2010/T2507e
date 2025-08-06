#include<stdio.h>
int main(){
	int ngay, thang, nam, a;
	printf("Nhap ngay hien tai:\n");
	scanf("%d", &ngay);
	printf("Nhap thang hien tai:\n");
	scanf("%d",& thang);
	printf("Nhap nam hien tai:\n");
	scanf("%d",& nam);
	 if(thang==2){
		if(nam%4==0 && nam%100!=0 || nam%400==0){
	 	a=29;
	 }else{
	 	a=28;
	 }}else{
	 if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10){
	 	a=31;
	 }else{
	 	ifw
		 (thang==4||thang==6||thang==9||thang==11){
		 	a=30;
		 }
	 }
}
	if(ngay<a){
		ngay=ngay+1;
	}else{
		ngay=1;
		if(thang==12){
			thang=1, nam=nam+1;
		}else{
			thang=thang+1;
		}
	}
	printf("Ngay ke tiep la ngay %d, thang %d, nam %d",ngay, thang, nam);
}
