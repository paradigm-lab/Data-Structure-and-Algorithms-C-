#include <stdio.h>

int main() {
	int a[50], size, i, num, pos;

	//Entering the size of the array
	printf("Enter the size of the array: ");
	scanf("%d", &size);

	if(size >= 50) {
		printf("Size out of the bound");
	}
	else {
		//Entering the interger in the array because an array is the fix size of the same data type 
		printf("Enter Element in the array: ");
		for (i = 0; i < size; i++) {
			scanf("%d", &a[i]);
		}

		printf("\n");
		printf("Printing out the Element in the Array\n");
		for(i = 0; i < size; i++) {
			printf("%d \t", a[i]);
		}
		printf("\n \n");
	}
	
	printf("Enter data you want to insert: ");
	scanf("%d", &num);
	printf("Enter position: ");
	scanf("%d", &pos);

	printf("\n");
	
	if (pos <= 0 || pos > size + 1) {
		printf("Invalid Condition");	
	}
	else {	
		for (i = size - 1; i >= pos - 1; i--) {
			a[i+1] = a[i];
		}
		a[pos - 1] = num;
		size++;
		
		//Printing the new value
		for (i = 0; i < size; i++) {
			printf("%d \t", a[i]);
		}	

		printf("\n");	
		printf("\n");
		
		//Inserting the data in the begining of the array
		printf("Insert an element at the begining of the array: ");
		scanf("%d", &num);
		for (i = size - 1; i >= 0; i--) {
			a[i + 1] = a[i];
		}
		a[0] = num;
		size++;

		//Printing the new Elements in the array
		for (i = 0; i < size; i++) {
			printf("%d \t", a[i]);
		}
	
		printf("\n");
		printf("\n");

		//Inserting data at the End of the Array
		printf("Insert an element at the end: ");	
		scanf("%d", &num);
		a[size] = num;
		size++;

		//Printing the new Element in the array 
		for(i = 0; i < size; i++) {
			printf("%d \t", a[i]);
		}
		printf("\n");
	}
}
