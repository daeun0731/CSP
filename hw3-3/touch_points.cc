#include<stdio.h>
#include<math.h>

typedef struct{
    double x;
    double y;
} Point;

typedef struct{
    char name[7];
    Point points[3];
} Person;

void getAns(const Person* p,int* n){
    int d, max=0;
    for (int i=0;i<3;i++){
        d=pow(p->points[i].x,2)+pow(p->points[i].y,2);
        if (d>max){
            max=d;
            *n=i;
        }
    }
    printf("%s (%g, %g)\n",p->name,p->points[*n].x,p->points[*n].y);
}

int main(void){
    Person P1, P2, P3;
    int n1, n2, n3;

    scanf("%s",P1.name);
    for (int i=0;i<3;i++){
        scanf("%lf %lf",&P1.points[i].x,&P1.points[i].y);
    }

    scanf("%s",P2.name);
    for (int i=0;i<3;i++){
        scanf("%lf %lf",&P2.points[i].x,&P2.points[i].y);
    }

    scanf("%s",P3.name);
    for (int i=0;i<3;i++){
        scanf("%lf %lf",&P3.points[i].x,&P3.points[i].y);
    }

    getAns(&P1,&n1);
    getAns(&P2,&n2);
    getAns(&P3,&n3);

    return 0;
}
