#include<stdio.h>

struct Person {
	char name[10];
	int age;
};

int main(void) {
	struct Person arr[3];
	struct Person* p = NULL;
	p=&arr[0];

	for (int i=0;i<3;i++){
		scanf("%s %d",arr[i].name,&arr[i].age);
	}
	for (int i=0;i<3;i++){
		printf("Name:%s, Age:%d\n",(p+i)->name,(p+i)->age);
	}
	
	return 0;
}
