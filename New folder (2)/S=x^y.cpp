#include <stdio.h>
#include <math.h>
	int S(int x, int y){
		int sum=pow(x,y);
		return sum;
	}
int main(){
	int x,y;
	printf("Nhap so x: \n");
	scanf("%d",&x);
	printf("Nhap so y:\n");
	scanf("%d",&y);
	printf("Ham tinh duoc la: %d",S(x,y));
	return 0;
}
