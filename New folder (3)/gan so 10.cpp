#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
 	printf("Nhap so nguyen b: ");
    scanf("%d", &b);
    int A = abs(a - 10);
    int B = abs(b - 10);
	 if (A < B)
        printf("So gan 10 hon la: %d\n", a);
    else if (B < A)
        printf("So gan 10 hon la: %d\n", b);
    else
        printf("Bang nhau\n");
}		
	}
}
