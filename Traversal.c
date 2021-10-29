#include <stdio.h>

int main() {
	//When the entire array is not used then, The remaining part of the array are filled with the /0 (Null)
	int a[50], size, i;
	
	//Entering the size of the array
	printf("Enter size of the array: ");	
	scanf("%d", &size);

	//Having a condition to check for the out of bound in the array, This is because in C no checking of the Upper bond of the array
	if (size >= 50) {
		printf("Size out of the bound");
	}
	else {
		//Entering the integer in the array
		printf("Enter Element of the array: ");
		for(i = 0; i < size; i++) {
			scanf("%d", &a[i]);
		}
		printf("\n");
		printf("Printing out the Element in the array\n");
		//Printing out the array
		for(i = 0; i < size; i++) {
			printf("%d \t", a[i]);
		}

	}

}	
