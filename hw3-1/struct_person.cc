#include<stdio.h>

struct Person {
	char name[10];
	int age;
};

int main(void) {
	Person Person;
	scanf("%s\n%d",Person.name,&Person.age);
	printf("name: %s\nage: %d\n",Person.name,Person.age);

	return 0;
}
