#include<stdio.h>

int main(void){
	int arr[5];
	for (int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}

	int min=arr[0], max=arr[0], sum=0;
	for (int j=0;j<5;j++) {
		if (arr[j]<min){
			min=arr[j];
		}
		if (arr[j]>max) {
			max=arr[j];
		}
		sum+=arr[j];
	}
	
	printf("min: %d\nmax: %d\nsum: %d\n",min,max,sum);

	return 0;
}
