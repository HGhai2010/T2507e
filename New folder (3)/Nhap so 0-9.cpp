#include <stdio.h>
int main() {
    int a;
    printf("Nhap mot chu so (0–9):\n ");
    scanf("%d", &a);

    switch(a) {
        case 0: printf("So 0\n");
		break;
        case 1: printf("So 1\n"); 
		break;
        case 2: printf("So 2\n"); 
		break;
        case 3: printf("So 3\n"); 
		break;
        case 4: printf("So 4\n"); 
		break;
        case 5: printf("So 5\n"); 
		break;
        case 6: printf("So 6\n"); 
		break;
        case 7: printf("So 7\n"); 
		break;
        case 8: printf("So 8\n"); 
		break;
        case 9: printf("So 9\n"); 
		break;
        default: printf("Sai so\n");
    }
}
