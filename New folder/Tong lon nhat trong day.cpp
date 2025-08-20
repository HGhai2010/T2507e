#include <stdio.h>
int main(){
    int n;
    printf("Nhap n : ");
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }    
	int max= a[0];
    for (int i= 0; i< n; i++) {
        int sum = 0;
        for (int j= i; j< n; j++) {
            sum=sum+a[j];
            if (sum> max) {
                max= sum;
            }
        }
    }
    printf("Tong lon nhat cua day con lien tiep: %d", max);

}
