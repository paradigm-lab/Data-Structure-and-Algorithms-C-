#include <stdio.h>

int main() {
	int a[50], size, i, pos, item;
	printf("Enter size of array: ");
	scanf("%d", &size);

	// Checking for the array bound checking
	// This is because no bound checking in C programming
	if (size >= 50) {
		printf("Size out of bound");
	}
	else {
		printf("Enter element in array: ");
		for (i = 0; i < size; i++) {
			scanf("%d", &a[i]);
		}
		
		printf("From which position you want to delete: ");
		scanf("%d", &pos);
		if (pos <= 0 || pos > size) {
			printf("Invalid position.");
		}
		else {
			item = a[pos - 1];
			for (i = pos - 1; i < size - 1; i++) {
				//This means value at position a[1] = a[2];
				a[i] = a[i + 1];
			}

			// And the we decreament the array
			size--;
			printf("The deleted value is %d \n \n", item);
			
			// Printing the updated array after deletion of the value
			printf("Printing out the updated array. \n");
			for (i = 0; i < size; i++) {
				printf("%d \t", a[i]);
			}


			// Deleting the value at the last position
			printf("Deleting the value at last position. \n");
			item = a[size];
			printf("The deleted value is %d \n", item);
			size--;
			printf("Printing the updated array: \n");
			for (i = 0; i < size; i++){
				printf("%d \t", a[i]);	
			}


			// Deleting the value at the first position
			for (i = 0; i < size - 1; i++) {
				a[i] = a[i + 1];
			}
			size--;
			// Printing the updated array
			for (i = 0; i < size; i++) {
				printf("%d \t", a[i]);
			}
			printf("\n");

		}
	}

}
