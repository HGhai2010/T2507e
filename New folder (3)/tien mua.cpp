#include <stdio.h>
int main() {
    float a;
    printf("Nhap gia tri mua hang (nghin dong):\n ");
    scanf("%f", &a);
    float b;
    if(a>= 500){
        b= a*0.9;}
    else{
	 if (a>= 200){
        b= a* 0.95;}
    else{
        a=b;}}
    printf("So tien phai tra la: %f nghin dong\n",b);
}
