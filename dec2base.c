/*
 * dec2base.c
 *
 *  Created on: Sep 16, 2017
 *  Author: Roger Zhang
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, Q, i;
	int R[sizeof(int)*8];
	if (argc != 3) {

// If only two arguments are declared, set the default base to two
		if (argc == 2){

			//Get user input
			sscanf(argv[1], "%d", &a);
			i = 0;
			printf("The base-2 form of %d is: ", a);

			//Do the math
			while (a > 0) {
				Q = a/2;
				R[i] = a%2;
				a = Q;
				i = i + 1;
			}

			//Print the converted integer value in base 2
			for (int n = i-1; n >= 0; n--) {
				 printf("%d", R[n]);
			}

			//End the program
			printf("\n");
			return 0;
		}

// If there are more then 3 or only 1 arguments, end program
		else {
			printf("Wrong number of arguments \n");
			return 0;
		}

	}

/*If 3 arguments are declared, set the second argument as the integer to be converted (a)
	and the third argument as the base the integer has to be converted to (b)*/

	//Get user input
	sscanf(argv[1], "%d", &a);
	sscanf(argv[2], "%d", &b);
	i = 0;
	printf("The base-%d form of %d is: ", b, a);

	//Do the math
	while (a > 0) {
			Q = a/b;
			R[i] = a%b;
			a = Q;
			i = i + 1;
	}

	//Print the converted integer value in base b
	for (int n = i-1; n >= 0; n--) {

	//If the remainder to be printed is greater then 10, print a letter representing its value instead
			if (R[n] >= 10) {
				printf ("%c", R[n]+('A'-10));
			}

			else printf("%d", R[n]);
	}

	//End the program
	printf("\n");
	return 0;
}
