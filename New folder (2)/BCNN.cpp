#include <stdio.h>
int ucln(int a,int b) {
    while (a !=b) {
        if (a>b){
        	a =a-b;}
        else{
		b =b-a;}
    }
    return a;
}
int bcnn(int a,int b){
    return a*b/ (ucln(a, b));
}
int main(){
    int a,b;
    printf("Nhap a:\n ");
    scanf("%d", &a);
    printf("Nhap b: \n");
    scanf("%d",&b);
    printf("BCNN cua a va b la: %d\n",bcnn(a, b));
    return 0;
}
