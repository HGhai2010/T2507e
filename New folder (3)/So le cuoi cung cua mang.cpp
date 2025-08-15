#include <stdio.h>
int main(){
    int n, sum;
    printf("Nhap mang n : ");
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);}
    for(int i = n-1; i>0; i--){
    	if(a[i]%2!=0){
    		sum=a[i];
    		break;
		}
	}printf("So le cuoi cung cua mang n la: %d",sum);
}
    
    
