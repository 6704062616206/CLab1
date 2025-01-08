#include<stdio.h>
int main() {
	int num1;
	int num2;
	scanf("%d\n%d",&num1,&num2);
	if (num1>num2){
		printf("num1 is greater than num2");
		printf("\n%d",(num1-num2));
	}
	else {
		printf("num2 is greater than num1");
		printf("\n%d",(num2-num1));
	}
}
