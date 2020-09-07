#include<stdio.h>

void square(double* num){
	*num *= *num;
	}

int main(void){
	double dvar;
	scanf("%lf", &dvar);
	square(&dvar);
	printf("%lf\n",dvar);

	return 0;
}
