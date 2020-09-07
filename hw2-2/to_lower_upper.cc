#include<stdio.h>
#include<string.h>

int main(void){
	char arr[10];
	scanf("%s",arr);
	for (int i=0;i<strlen(arr);i++){
		if (arr[i]>=97) {
			arr[i]-=32;
		}
		else {
			arr[i]+=32;
		}
	}
	printf("%s\n",arr);

	return 0;
}
