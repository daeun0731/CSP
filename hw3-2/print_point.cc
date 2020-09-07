#include<stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint(const Point* p){
	Point pp = {p->xpos*2,p->ypos*2};
	return pp;
}

void swapPoint(Point& p1, Point& p2){
	Point temp=p1;
	p1=p2;
	p2=temp;
}

int main(void){
	Point p1, p2;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	p2=getScale2xPoint(&p1);
	printf("Calling getScale2xPoint()\nP1 : %d %d\nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
	swapPoint(p1,p2);
	printf("Calling swapPoint()\nP1 : %d %d\nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);

	return 0;
}
