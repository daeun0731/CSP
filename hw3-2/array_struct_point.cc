#include<stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void scale2x(Point* pp)
{
	pp->xpos *=2;
	pp->ypos *=2;
}

int main(void){
	Point arr[3];
	for (int i=0;i<3;i++){
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
		scale2x(&arr[i]);
	}
	for (int i=0;i<3;i++){
		printf("[%d] %d %d\n", i, arr[i].xpos, arr[i].ypos);
	}

	return 0;
}
