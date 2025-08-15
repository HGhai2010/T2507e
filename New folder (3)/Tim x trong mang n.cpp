#include <stdio.h>
int main(){
    int n;
    printf("Nhap mang n : ");
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    int x;
    printf("Nhap so nguyen x: \n");
    scanf("%d",&x);
     for(int i = 0; i < n; i++){
    	if(a[i]==x){
    	printf("X co trong mang n");
    	break;
	} else{
		printf("X khong co trong mang n");
		break;
	} 
		}
	}
