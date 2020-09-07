#include<stdio.h>

typedef struct {
    double a;
    double b;
} ComplexNum;

void printComplex(const ComplexNum* p){
    printf("%lf + %lfi\n", p->a, p->b);
}

void printAddComp(const ComplexNum* p1, const ComplexNum* p2){
    ComplexNum add;
    add.a = p1->a + p2->a;
    add.b = p1->b + p2->b;
    printComplex(&add);
}

void printMulComp(const ComplexNum* p1, const ComplexNum* p2){
    ComplexNum mul;
    mul.a = (p1->a*p2->a) - (p1->b*p2->b);
    mul.b = (p1->a*p2->b) + (p1->b*p2->a);
    printComplex(&mul);
}

int main(){
    ComplexNum P1, P2;
    scanf("%lf %lf", &P1.a, &P1.b);
    scanf("%lf %lf", &P2.a, &P2.b);
    printf("복소수1:\n");
    printComplex(&P1);
    printf("복소수2:\n");
    printComplex(&P2);
    printf("두 복소수의 합:\n");
    printAddComp(&P1, &P2);
    printf("두 복소수의 곱:\n");
    printMulComp(&P1, &P2);

    return 0;
}

