#include<stdio.h>

int main () {
	int array [10]; // array can store upto 10 elements.
	int i;
	int max = array[0]; // assume the largest number resides at 1st position. used for comparision.
	
	
	// 'i' used for iteration, means repeating the loop.
	
	
	// to complete 10 iterations 'i' could be start from 0, 1 upto 9 and 10 depending upon initial value.
	

	
	for (i = 0; i <=9; i++) {
		
	
		printf("Enter the first value %d : ", i+1);
		scanf("%d", &array[i]); // since i = 0, in 1st iteration / loop execution value will be stored at array[0].
		
		if (array[i] > max) {
			max = array[i];
		}
		
	} printf("%d", max);
}
