#include <stdio.h>
int ucln(int a, int b) {
    while (a!=b) {
        if (a>b){
		a =a-b;}
        else {
		b =b-a;}
    }
    return a;
}
int main(){
    int a,b;
    printf("Nhap so a:\n ");
    scanf("%d", &a);
    printf("Nhap so b:\n");
    scanf("%d",&b);
    printf("Tong cac chu so cua a va b la: %d\n",ucln(a,b));
    return 0;
}
