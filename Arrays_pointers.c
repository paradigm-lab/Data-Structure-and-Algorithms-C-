#include <stdio.h>

int main() {

	// When we don't write the size in the array bracket that is fine the memory manager 
	// will allocate size of the array.
	
	// Array name it self is a pointer
	// Always an array store the base address of the array
	// But you can't change the base address of the array because it is a fixed address
	int a[] = {6, 2, 1, 5, 3};


	// Pointer is a special variable that is going to store the address of another variable.
	// An address is always in form of hexadecimal.

	// This is the declaration of the pointer and this pointer is going to 
	// store the address of the integer data type
	// p is a pointer to integer.
	// We use to operator for initializing and assigning the pointer
	// Astic operator (*) and Address of operator (&)
	
	int *p;
	p = a;

	// p != &p
	// Address + 1 * sizeof(Data_type)
	// p++;
	

	printf("%d \t", *(a + 2));
	// Using the pointer to access values in arrays
	printf("%d \t", *(p + 1));
	printf("%d \t", 2[a]);
	printf("%d \t", a[2]);
	
	printf("%d \t", *a);
	printf("%d \t", *(a + 1));
	//printf("%d \t", &a + 1);
	//printf("%d \t", a + 1);


	// *a or *q 
	//a[i] = *(a + i)
	//*(i + a) = i[a]
	
	

	/*
	printf("%d \n", *p);

	// We can use %p or %x to print the address inform of hexadecimal
	printf("%p \n", p);
	printf("%p \n", a);
	*/

	
	printf("\n");
	int z[5], i;
	int *q = z;

	printf("%x \n", q);
	printf("%x \n", z);

	for (i = 0; i < 5; i++) {
		scanf("%d", (q + i));
	}

	for (i = 0; i < 5; i++) {
		printf("%d \t", *(q + i));
	}
	printf("\n");
	


}
