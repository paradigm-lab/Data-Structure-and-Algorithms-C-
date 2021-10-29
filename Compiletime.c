#include <stdio.h>

int main() {

	printf("\n");
	//Making the fixed value for the array
	//This will be initialized at the compile time of the program
	int a[5] = {4, 33, 23, 1, 0};

	//Using the index to access the arrays
	printf("%d \t %d \t %d \t %d \t %d \n \n", a[0], a[1], a[2], a[3], a[4]);

	//As we no that String is an array of characters
	//The following array, There is no number of the size so the compile will fill the size at the compile time
	char b[] = {'D', 'A', 'T', 'A', ' ' , 'S', 'T', 'R', 'U', 'C', 'T', 'U', 'R', 'E'};
	
	//Using the index to access each value in the array of character
	printf("%c %c %c %c %c %c %c %c %c %c %c %c %c %c", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9], b[10], b[11], b[12], b[13]);
	printf("\n");
}
