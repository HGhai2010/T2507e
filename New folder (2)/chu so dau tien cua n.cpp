#include <stdio.h>
int main(){
    int n;
    printf("Nhap so n:\n");
    scanf("%d",&n);
    while(n>=10){
        n =n/10;
    }
	printf("Chu so dau tien cua n la:%d \n ",n);
}
