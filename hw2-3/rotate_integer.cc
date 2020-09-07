#include<stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
	int temp=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=temp;
}

void rotateRight(int* pa, int* pb, int* pc){
	int temp=*pc;
	*pc=*pb;
	*pb=*pa;
	*pa=temp;
}

int main(void){
	int a=10, b=20, c=30,num;
	for (;;) {
		printf("%d:%d:%d\n",a,b,c);
		scanf("%d",&num);
		if (num==1){
			rotateLeft(&a,&b,&c);
		}
		else if (num==2){
			rotateRight(&a,&b,&c);
		}
		else {
			break;
		}
	}

	return 0;
}
