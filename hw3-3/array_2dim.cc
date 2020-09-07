#include<stdio.h>

int main(void){
	int arr[3][2];
	int sum[2];
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (int j=0;j<2;j++){
		for (int i=0;i<3;i++){
			sum[j]+=arr[i][j];
		}
	}
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<2;i++){
		printf("%d번째 열의 숫자의 합: %d\n", i+1, sum[i]);
	}

	return 0;
}
