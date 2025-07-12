#include <stdio.h>

int main () {
	
	
//	====================================
//		Traversal of an array
//	====================================

	int array[20];
	int size, max, min, length,i,j,k;
	int total =0;
	float average;
	
	
	
	printf("Enter the length of the array: ");
	scanf("%d", &size);
	if (size > 20 || size <= 0) {
		printf("Enter the values upto 20.");
		return 1;
	}
	
	for (i = 0; i < size; i++){
		printf("Element %d : ", i+1);
		scanf("%d", &array[i]);
		total = total+array[i];
	}
	
	max = array[0];
	min = array[0];
	
	for (k = 1; k < size; k++) {
			if(array[k] > max ) {
			max = array[k];
		}
		
		if(array[k] < min) {
			min = array[k];
		}
	}
	
//	length = size*4 / 4;
	average = (float)total/size;
	
	
	printf("Your input: ");
	for (j = 0; j < size; j++){
		printf( "%d  ", array[j]);
	
	}
	
	
	printf("\nMaximum Value: %d", max);
	printf("\nMinimum Value: %d", min);
	printf("\nAverage Value: %.2f", average);

    return 0;
}



