#include<stdio.h>
int main(){

	int size,max = 0;

	printf("Enter Size of an array: ");
	scanf("%d",&size);

	int array[size],LDS[size];

	printf("Enter the numbers: ");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
	}

	for(int i=0;i<size;i++){
		LDS[i] = 1;
	}

	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			if(array[i] < array[j] && LDS[i] < LDS[j] + 1){
				LDS[i] = LDS[j] + 1;
			}
		}
	}
    printf("/n");
	printf("The final Result is : ");

	for(int i=0;i<size;i++){
		if(max < LDS[i]){
			printf("%d ",array[i]);
			max = LDS[i];
		}
	}
    printf("/n");
	printf("Length of Longest Decrease Subsequence  is: %d",max);

	return 0;
}
