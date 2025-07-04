#include<stdio.h>

int main () {
	int array [10]; // array can store upto 10 elements.
	int i; // 'i' used for iteration, means repeating the loop.
	
//==================================
//	Max and Min Value in an Array
//==================================
	
	
	
	// max and min are used for comparision,
	int max = 0; // Intialize to avoid garbage value.
	int min = 0; // intialize to avoid garbage value.
	
	
	// to complete 10 iterations 'i' could be start from 0, 1 upto 9 and 10 depending upon initial value.
	for (i = 0; i <=9; i++) {
		
	
		printf("Enter the first value %d : ", i+1);
		scanf("%d", &array[i]); // since i = 0, in 1st iteration / loop executes, value stores at array[0].
		
		if (array[i] > max) { // if max value found, store in 'max' variable.
			max = array[i];
		}
		
		if (array[i] < min) { // reverse the logic, if min value found, store in 'min' variable.
			min = array[i];
		}
		
	} 
	printf("%d", max);
	printf("%d",min);

return 0;
}
