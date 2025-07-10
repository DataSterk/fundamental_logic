#include <stdio.h>

int main() {
	
//	===================================
//		Check a Prime Number - Static
//	===================================
	
    int static_number = 2;
    int i;
    int prime;  // Assume number is prime

    for (i = 2; i < static_number; i++) {
        if (static_number % i == 0) {
            prime = 0;  // Found a divisor, it's not prime
            break;
        }
    }

    if (prime == 1) {
        printf("%d is a prime number.\n", static_number);
    } else {
        printf("%d is not a prime number.\n", static_number);
    }



//	===================================
//		Check a Prime Number - Dynamic
//	===================================
	
//	int dynamic_number;
//
//	printf("Enter a number : ");
//	scanf("%d", &dynamic_number); // '&' places the the input in 'dynamic_number' variable.
//	
//	// Use the same logic as of static.
//	
//	for (i = 2; i < dynamic_number; i++) {	// divides the number between 1 and the number itself.
//        if (dynamic_number % i == 0) {				//if number divides, remainder == 0, not a prime.
//            prime = 0;  // Found a divisor, it's not prime
//            break;
//        }
//    }
//
//    if (prime != 0) {
//        printf("%d is a prime number.\n", dynamic_number);
//    } else {
//        printf("%d is not a prime number.\n", dynamic_number);
//    }
	
 	int lower_limit;
 	int upper_limit;
 	
 	printf("Enter lower limit : ");
	scanf("%d",&lower_limit);
	
	printf("Enter upper limit : ");
	scanf("%d",&upper_limit);
	
	
	for(lower_limit; lower_limit<=upper_limit;lower_limit++) {
//		prime=0;
		
		for (i = 2; i < lower_limit; i++) {
					
			if (lower_limit % i == 0) {
//							
				prime = 0;
				break;
			} 
			
			else {
				prime=1;
			}
			
		} 
		//printf("%d %d", prime, lower_limit);
		if(prime == 1) {
			printf("%d ", lower_limit);
	}
		} 
		
    return 0;	

}

