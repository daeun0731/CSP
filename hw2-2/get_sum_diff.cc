#include<stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff){
	*pSum=a+b;
	*pDiff=a-b;
}

int main(void){
	int num1, num2, Sum, Diff;
	scanf("%d %d", &num1, &num2);
	getSumDiff(num1, num2, &Sum, &Diff);
	printf("Sum:%d\ndiff:%d\n", Sum, Diff);

	return 0;
}
