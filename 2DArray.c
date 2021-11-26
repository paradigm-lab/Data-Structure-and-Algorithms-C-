#include <stdio.h>

int main() {
	int i, j;
	// Declaration of the 2D Array or a matrix 
	// The first Sub script is for row number and
	// The second sub-script is for column number.
	int a[2][3];	

	// We are also going to access the arrays using the index 
	// But inform of 2D array example: a[0][1]
	// You can initilize the array both at runtime and at compile time.
	// At compile time (No of Row * No of Column) * sizeof(dataType).
	
	// Nt: It is a must to give the column size but it is optional to give the rows size.
	int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {2, 92, 19}};

	
	// Printing the compiled intialized array
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d \t", b[i][j]);
		}
		printf("\n");
	}

	printf("\n \n");

	// Initializing the a 2 array at runtime.
	// We are going to use the nested loop.
	printf("Enter the elements: ");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("Printing out the element in the array: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d \t", a[i][j]);
		}
		printf("\n");
	}
}
