#include <stdio.h>
int main(){
	int a, b;
	char operator;
	printf("moi ban nhap vao phep tinh");
	scanf("%c", &operator);
	printf("moi ban nhap 2 so a va b");
	scanf("%d %d", &a, &b);
	switch(operator){
		case'+':
			printf("%d + %d = %d", a, b, a +b);
			break;
		case '-':
			printf("%d - %d = %d", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d", a, b, a*b);
			break;
		case'/':
			printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("input invalid!");					
	}
	return 0;
}
