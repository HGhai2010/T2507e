#include<stdio.h>
int main(){
    int n,m =0;
    printf("Nhap so nguyen duong n:\n");
    scanf("%d", &n);
    while (n !=0){
        int a =n%10;
        if (a >m){
            m =a;
        }
        n =n/10;
    }
    printf("So lon nhat trong n la: %d\n", m);
}
