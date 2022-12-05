#include<stdio.h>
int main()
{
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	switch(a){
		case 3:
			printf("*");
		case 2:
			printf("*");
		case 1:
			printf("*");
			break;		
	}
	return 0;
}
