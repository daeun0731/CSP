#include<stdio.h>

void getSumDiff(int a, int b, int& sum, int& diff){
    sum=a+b;
    diff=a-b;
}

int main(void){
    int num1,num2,Sum,Diff;
    scanf("%d %d", &num1, &num2);
    getSumDiff(num1,num2,Sum,Diff);
    printf("Sum:%d\ndiff:%d\n",Sum,Diff);

    return 0;
}
