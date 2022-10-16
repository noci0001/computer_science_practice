#include <stdlib.h>
#include <stdio.h>

//sizeof is calculated upon the address
//no star pointer var with & is equal to address of the pointer
//no star pointer var no & is equal to the address the pointer is pointing 
//star pointer var is equal to the value at the address the pointer is pointing to

int main()
{
	int number = 15;
	int *pNumber =  &number;
	
	//value of vars
	
	printf("Value of pNumber = %p\n", pNumber);
	printf("Value of number var = %d\n", number);
	printf("Value pNumber is pointing to = %d", *pNumber);

	//addresses
	
	printf("Address of pNumber = %p", (void*)&pNumber);
	printf("Address of number = %p", &number);
	
	//sizeof
	
	printf("Size of pNumber = %ld", sizeof(&pNumber));
	printf("Size of number = %ld", sizeof(&number));


	return 0;
}
