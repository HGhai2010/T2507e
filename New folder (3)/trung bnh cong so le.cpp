#include <stdio.h>
int main(){
    int n, sum=0,bn=0;
    float tbc=0;
    printf("Nhap mang n : ");
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
        if(a[i]%2!=0){
        	bn++;
        	sum+=a[i];
		}
    }
	if(bn>0){
		tbc= sum/bn;
	}
	printf("Trung binh cong cac so le trong mang n la: %f",tbc);
}
