#include<stdio.h>

typedef struct
{
	char name[7];
	int score;
} Person;

void printScoreStars(Person* persons,int len){
	for (int i=0;i<len;i++){
		(persons+i)->score /=5;
		printf("%s ", (persons+i)->name);
		for (int j=0;j<(persons+i)->score;j++){
			printf("*");
		}
		printf("\n");
	}
}

int main(void){
	Person arr[3];
	for (int i=0;i<3;i++){
		scanf("%s %d", arr[i].name, &arr[i].score);
	}
	printScoreStars(&arr[0],3);

	return 0;

}
