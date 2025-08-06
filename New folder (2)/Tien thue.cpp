#include<stdio.h>
int main(){
	float a,b;
	printf("Nhap tong thu nhap ca nhan (tr dong):\n");
	scanf("%f",&a);
	if(a<=5){
		b=0.05*a;
		}else{
			if(a<=10){
				b=0.10*a-0.25;
				}else{
					if(a<=18){	
						b=0.15*a-0.75;
						}else{
							if(a<=32){
								b=0.20*a-1.65;
								}else{
									if(a<=52){
										b=0.25*a-3.25;
										}else{
											if(a<=80){
												b=0.3*a-5.85;
												}else{
													float h=(35/100)*a-9.85;
													b=0.35*a-9.85;
													}
												}
											}
										}
									}
								}	printf("Muc thue can nop la: %f tr dong\n",b);
							}
